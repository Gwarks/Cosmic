#include "cosmem.hpp"


cosmem::cosmem(){
    mem[0] = 0xF;
}

uint8_t cosmem::Read(uint16_t addr){
    return mem[addr];
}

void cosmem::Write(uint16_t addr, uint8_t val){
    mem[addr] = val;
}

