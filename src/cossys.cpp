#include "cossys.hpp"



void MemoryWrite(cossys sys, uint16_t address, uint8_t value)
{
    //debugLog.AddLog("Wrote %X to %X\n", value, address);
    sys.memory[address] = value;
}

uint8_t MemoryRead(cossys sys, uint16_t address)
{
    //debugLog.AddLog("READ: %X from %X\n", memory[address], address);
    return sys.memory[address];
}

cossys::cossys() : proc(cosproc(MemoryRead, MemoryWrite)){
    //memset(memory,0,sizeof(uint8_t)*65536);
    //proc = cosproc(MemoryRead,MemoryWrite);
}