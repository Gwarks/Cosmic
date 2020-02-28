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


/* Holds the system for Cosmic, everything that would be on a motherboard lives here */

class cossys{
    public:
        cosmem mem;
        cosproc proc;
        cossys();


};