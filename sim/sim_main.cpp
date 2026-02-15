#include "Vtb_if_stage.h"
#include "verilated.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtb_if_stage* top = new Vtb_if_stage;
    top->clk = 0;

    for (int i = 0; i < 1000 && !Verilated::gotFinish(); ++i) {
        top->clk = 0;
        top->eval();
        ++main_time;

        top->clk = 1;
        top->eval();
        ++main_time;
    }

    if (!Verilated::gotFinish()) {
        VL_PRINTF("ERROR: Simulation timeout before $finish\n");
        delete top;
        return 1;
    }

    delete top;
    return 0;
}
