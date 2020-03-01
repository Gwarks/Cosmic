#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#include "proc.hpp"


/* Holds the system for Cosmic, everything that would be on a motherboard lives here */

class sys{
    public:
        mem cmem;
        proc cproc;
        sys();


};