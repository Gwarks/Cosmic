/**
 * @file cosproc.hpp
 * 
 * @author Clay Buxton  (clbx, buxtonc@etown.edu)
 * @author Kevin Carman (carmank, carmank@etown.edu)
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#include "cosproc.hpp"
#include "memory.hpp"


/* Holds the system for Cosmic, everything that would be on a motherboard lives here */

class cossys{
    public:
        memory mem;
        cosproc proc;
        cossys();
        friend void MemoryWrite(uint16_t address, uint8_t value);
        friend uint8_t MemoryRead(uint16_t address);


};