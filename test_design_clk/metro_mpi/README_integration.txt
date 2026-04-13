Metro-MPI: Instructions for Integrating with Your Custom Testbench (e.g., sim.cpp)
==================================================================================

To enable MPI-based co-simulation, you need to make three small changes to your main C++ testbench file.

1. ADD THIS INCLUDE AT THE TOP OF YOUR FILE:
-------------------------------------------
#include "metro_mpi/rank0_harness.h"


2. ADD THIS LINE AT THE START OF YOUR main() FUNCTION:
-----------------------------------------------------
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    mpi_initialize(); // <-- ADD THIS LINE
    
    // ... your existing setup code ...
}


3. ADD THESE LINES AT THE END OF YOUR main() FUNCTION, BEFORE EXITING:
---------------------------------------------------------------------
    // ... your simulation loop finishes ...
    
    metro_mpi_broadcast_shutdown(); // <-- ADD THIS LINE to signal other ranks to exit.
    
    top->final();
    trace->close();
    delete top;
    delete trace;
    
    mpi_finalize(); // <-- ADD THIS LINE to clean up MPI.
    return 0;
}


4. COMPILE YOUR TESTBENCH WITH AN MPI COMPILER:
------------------------------------------------
When you build your final executable, you must use an MPI C++ compiler wrapper, such as 'mpic++'.
Example Makefile rule:
    make CXX=mpic++ LINK=mpic++ -C $(OBJ_DIR) -f Vyour_top_module.mk
