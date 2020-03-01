#include "sys.hpp"


sys::sys() : cmem(mem()), cproc(proc(cmem)){
}