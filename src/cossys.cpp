#include "cossys.hpp"

cossys::cossys(){
    cosproc proc = cosproc(MemoryRead, MemoryWrite);


}

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
