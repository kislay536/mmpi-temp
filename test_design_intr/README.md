# Verilator parallel-core example

This workspace contains a minimal combinational design that instantiates the same core module four times under one top module.

## Files

- `rtl/core.sv`: reusable combinational core
- `rtl/processor.sv`: top-level module that instantiates four identical cores
- `sim_main.cpp`: Verilator C++ harness that drives inputs and prints outputs

## Example build

If your Verilator build supports `-sv`, you can compile the design with:

```bash
verilator -Wall --cc --exe --build -sv rtl/core.sv rtl/processor.sv sim_main.cpp --top-module processor
```

Run the generated binary from Verilator's `obj_dir` output.

## Notes

- The design is purely combinational, so there is no clock or reset.
- Each `core` instance is independent, which matches the structure you described for parallel simulation or distributed execution experiments.
