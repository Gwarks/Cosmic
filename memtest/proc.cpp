#include "proc.hpp"



proc::proc(mem memory){
    cmem = memory;
}


void proc::execute(){
    printf("EXECUTING POSITION 0 VALUE %X",cmem.memory[0]);
}

