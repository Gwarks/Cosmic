#include "memory.hpp"


uint8_t memory::Read(uint16_t addr){
    return mem[addr];
}

void memory::Write(uint8_t val, uint16_t addr){
    mem[addr] = val;
}

