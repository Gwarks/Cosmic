#include <bits/stdint-uintn.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <time.h>
#include <cstring>
#include <string>
#include <array>

class cosmem{
    public:
        cosmem();
        uint8_t Read(uint16_t);
        void Write(uint16_t, uint8_t);
        //std::array<uint8_t, 65536> mem;
        uint8_t mem[65536];

};