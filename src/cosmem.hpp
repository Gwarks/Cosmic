#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <time.h>
#include <cstring>
#include <string>
#include <array>

#include "imgui.h"
#include "imgui_memory_editor.h"

class cosmem{
    public:
        static MemoryEditor ramEdit;
        cosmem();
        uint8_t Read(uint16_t);
        void Write(uint16_t, uint8_t);
        void editor(int pc);
        uint8_t mem[65536];
        
        //std::array<uint8_t, 65536> mem;
        

};