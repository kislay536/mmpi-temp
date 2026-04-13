#include <cstdint>
#include <array>
#include <iostream>

#include "Vcmp_top.h"
#include "verilated.h"
#include "rank0_harness.h"

static void print_outputs(const Vcmp_top& dut) {
    std::cout << "out0=" << dut.out0
              << " out1=" << dut.out1
              << " out2=" << dut.out2
              << " out3=" << dut.out3
              << " inter01=" << dut.inter01
              << " inter12=" << dut.inter12
              << " inter23=" << dut.inter23
              << " inter34=" << dut.inter34
              << std::endl;
}

static void tick(Vcmp_top& dut) {
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    mpi_initialize();

        Vcmp_top dut;
    dut.clk = 0;
    dut.rst_n = 0;

    struct Stimulus {
        uint8_t in_a0;
        uint8_t in_b0;
        uint8_t in_a1;
        uint8_t in_b1;
        uint8_t in_a2;
        uint8_t in_b2;
        uint8_t in_a3;
        uint8_t in_b3;
        uint8_t op0;
        uint8_t op1;
        uint8_t op2;
        uint8_t op3;
    };

    const std::array<Stimulus, 6> tests = {{
        {10, 3, 20, 7, 0x55, 0x0F, 0xF0, 0xCC, 0, 1, 2, 3},
        {100, 50, 9, 12, 0xAA, 0xFF, 0x0F, 0x33, 0, 1, 2, 3},
        {42, 8, 64, 15, 0x12, 0x34, 0x80, 0x01, 1, 0, 3, 2},
        {7, 7, 15, 1, 0x5A, 0xA5, 0x3C, 0xC3, 2, 2, 0, 1},
        {200, 11, 33, 22, 0xFE, 0x10, 0x7E, 0x81, 3, 0, 1, 2},
        {5, 250, 18, 200, 0x99, 0x66, 0x0C, 0xF3, 0, 3, 2, 1}
    }};

    tick(dut);
    dut.rst_n = 1;
    tick(dut);

    auto apply_and_print = [&](const Stimulus& stimulus) {
        dut.in_a0 = stimulus.in_a0;
        dut.in_b0 = stimulus.in_b0;
        dut.in_a1 = stimulus.in_a1;
        dut.in_b1 = stimulus.in_b1;
        dut.in_a2 = stimulus.in_a2;
        dut.in_b2 = stimulus.in_b2;
        dut.in_a3 = stimulus.in_a3;
        dut.in_b3 = stimulus.in_b3;
        dut.op0 = stimulus.op0;
        dut.op1 = stimulus.op1;
        dut.op2 = stimulus.op2;
        dut.op3 = stimulus.op3;

        tick(dut);
        print_outputs(dut);
    };

    for (const auto& stimulus : tests) {
        apply_and_print(stimulus);
    }

    metro_mpi_broadcast_shutdown();
    MPI_Barrier(MPI_COMM_WORLD);
    mpi_finalize();
    return 0;
}