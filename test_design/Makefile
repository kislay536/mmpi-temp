VERILATOR_BIN_DIR ?= ../../verilator-private/verilator-install/bin
TOP_MODULE ?= cmp_top
RTL_SOURCES := rtl/tile.sv rtl/cmp_top.sv
CPP_SOURCES := sim_main.cpp

export PATH := $(abspath $(VERILATOR_BIN_DIR)):$(PATH)

version:
	@verilator --version

.PHONY: all build run build-mmpi run-mmpi inspect-mmpi clean

all: build

build:
	verilator -Wall --cc --exe --build -sv $(RTL_SOURCES) $(CPP_SOURCES) --top-module $(TOP_MODULE)

run: build
	./obj_dir/V$(TOP_MODULE)

build-mmpi:
	verilator -Wall --cc --exe -sv --mmpi-o1 --d1 $(RTL_SOURCES) $(CPP_SOURCES) --top-module $(TOP_MODULE)

run-mmpi: build-mmpi
	@echo "Metro-MPI analysis completed. Generated files are in ./metro_mpi"
	@echo "See ./metro_mpi/README_integration.txt for the generated harness and next-step build notes."

inspect-mmpi: build-mmpi
	@echo "Generated Metro-MPI files:"
	@ls -1 metro_mpi

clean:
	rm -rf obj_dir