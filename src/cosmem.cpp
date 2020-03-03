#include "cosmem.hpp"


MemoryEditor cosmem::ramEdit;

cosmem::cosmem(){
    mem[0] = 0xF;
}

uint8_t cosmem::Read(uint16_t addr){
    return mem[addr];
}

void cosmem::Write(uint16_t addr, uint8_t val){
    mem[addr] = val;
}

void cosmem::editor(int pc){
    cosmem::ramEdit.DrawWindow("Memory Editor", mem, sizeof(uint8_t) * 65536);
    cosmem::ramEdit.Highlight(pc, pc + 1, ImGui::ColorConvertFloat4ToU32(ImVec4(0.75f, 0.75f, 0.25f, 1.0f)));
}