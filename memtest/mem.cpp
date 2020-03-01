#include "mem.hpp"

mem::mem(){
    memory[0] = 0xF;
}


uint8_t mem::Read(uint16_t loc){
    return memory[loc];
}

void mem::Write(uint16_t loc, uint8_t data){
    memory[loc] = data;
}