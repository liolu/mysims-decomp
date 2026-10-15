#include "m2c.h"

void func_02086cd8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1 << 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (arg2 << 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg3 << 0xC);
}
