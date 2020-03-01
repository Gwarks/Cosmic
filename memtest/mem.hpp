#include <stdint.h>


class mem{
    public:
        mem();
        uint8_t memory[8];
        void Write(uint16_t loc, uint8_t data);
        uint8_t Read(uint16_t loc);
};