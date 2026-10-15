#include "m2c.h"

void func_02063ca0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        M2C_FIELD(arg0, s8 *, 0x15)  = 1;
    }
}
