#include "m2c.h"

void func_020c3fa8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg1;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = -1;
    }
}
