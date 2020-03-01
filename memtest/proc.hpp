#include "mem.hpp"
#include <stdio.h>


class proc{
    public:
        proc(mem);
        void execute();
        mem cmem;
};