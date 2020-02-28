#include "cossys.hpp"



void cossys::MemoryWrite(uint16_t address, uint8_t value)
{
    //debugLog.AddLog("Wrote %X to %X\n", value, address);
    memory[address] = value;
}

uint8_t cossys::MemoryRead(uint16_t address)
{
    //debugLog.AddLog("READ: %X from %X\n", memory[address], address);
    return memory[address];
}

cossys::cossys(){
    memset(memory,0,sizeof(uint8_t)*65536);
    proc = cosproc(&cossys::MemoryRead,&cossys::MemoryWrite);
}