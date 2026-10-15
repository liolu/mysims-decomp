#include "m2c.h"

void func_020bf7cc(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg1 < arg2) {
        M2C_FIELD(arg0, s32 *, 0x98) = arg1;
        M2C_FIELD(arg0, s32 *, 0x9C) = arg2;
    } else {
        M2C_FIELD(arg0, s32 *, 0x98) = arg2;
        M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
    }
    if (arg3 < arg4) {
        M2C_FIELD(arg0, s32 *, 0xA0) = arg3;
        M2C_FIELD(arg0, s32 *, 0xA4) = arg4;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xA0) = arg4;
    M2C_FIELD(arg0, s32 *, 0xA4) = arg3;
}
