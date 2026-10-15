#include "m2c.h"

void func_02084a44(void *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5) {
    M2C_FIELD(arg0, s32 *, 0xE08) = (s32) ((arg3 & 0xF) + (((arg1 & 0xF) * 0x3E8) + ((arg2 & 0xF) * 0x64)));
    M2C_FIELD(arg0, s32 *, 0xDF0) = (s32) (arg4 << 0xC);
    M2C_FIELD(arg0, s32 *, 0xDF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xDF8) = (s32) (arg5 << 0xC);
}
