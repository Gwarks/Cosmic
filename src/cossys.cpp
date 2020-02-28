#include "cossys.hpp"


cossys::cossys() : mem(cosmem()), proc(cosproc(mem)){
    mem = cosmem();
    proc = cosproc(mem);
}