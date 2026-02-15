#include "Vtb_id_stage.h"
#include "verilated.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtb_id_stage* top = new Vtb_id_stage;
    top->clk = 0;

    for (int i = 0; i < 2000 && !Verilated::gotFinish(); ++i) {
        top->clk = 0;
        top->eval();
        ++main_time;

        top->clk = 1;
        top->eval();
        ++main_time;
    }

    if (!Verilated::gotFinish()) {
        VL_PRINTF("INFO: Simulation ended without $finish (expected for skeleton TB)\n");
    }

    delete top;
    return 0;
}
