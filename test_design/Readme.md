1. Copy tile_main.cpp from the metro-mpi-dummy to the generated one, this is becasue there are few modifications needed in veriator to make it generalised, it has became to specfic to OpenPiton.

2. `%Error: modified_tile.v:23:20: Can't find definition of variable: 'clk'
   23 |   always @(posedge clk) begin
      |                    ^~~`
You will get this so better make it @(*)

3. Change the path relative to your machine

to make tile use this from metro-mpi directory:

`verilator -Wall --cc --exe --build -sv --Mdir obj_dir_lib ../rtl/tile.sv tile_main.cpp --top-module tile`

to make system use this from metro-mpi directory:

`verilator -Wall -Wno-TIMESCALEMOD -Wno-DECLFILENAME   --cc --exe --build -sv --Mdir obj_dir_sys  modified_cmp_top.v modified_tile.v ../sim_main_mpi.cpp   --top-module cmp_top   -I.   -CFLAGS "-I$(pwd)"`

To run use this from metro-mpi directory:

`mpirun -np 1 --oversubscribe --output-filename mmpi_log /home/kislay/Documents/gsoc/mmpi-temp/test_design/metro_mpi/obj_dir_sys/Vcmp_top  : -np 4 --output-filename mmpi_log  /home/kislay/Documents/gsoc/mmpi-temp/test_design/metro_mpi/obj_dir_lib/Vtile`