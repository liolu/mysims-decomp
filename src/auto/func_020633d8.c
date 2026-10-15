#include "m2c.h"

void func_020633d8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (arg1 + 4);
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (arg2 + 4);
}
