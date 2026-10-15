#include "m2c.h"

void func_02033980(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s16 *, 0x18) = arg2;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
}
