#include "cosmem.hpp"
#include <bits/stdint-uintn.h>


cosmem::cosmem(){
    for(int i = 0; i < 65536; i++){
        mem[i] = 0x00;
    }
}

uint8_t cosmem::Read(uint16_t addr){
    return mem[addr];
}

void cosmem::Write(uint16_t addr, uint8_t val){
    mem[addr] = val;
}

