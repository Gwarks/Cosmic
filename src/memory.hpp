#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <time.h>
#include <cstring>
#include <string>
#include <array>

class memory{
    private:
        std::array<uint8_t, 65536> mem{0};

    public:
        uint8_t Read(uint16_t);
        void Write(uint8_t, uint16_t);

};