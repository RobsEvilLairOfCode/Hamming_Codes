#include "Vhamming_tb.h"
#include "verilated.h"

int main(int argc, char **argv){
    Verilated::commandArgs(argc,argv);
    Vhamming_tb* tb = new Vhamming_tb;
    Verilated::traceEverOn(true);

    while(!Verilated::gotFinish()){
        tb->eval();
        Verilated::timeInc(1);
    }

    delete tb;
    return 0;
}