#include "m2c.h"

void func_02063028(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 4)   = (s32) (arg1 << 0xC);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) (arg2 << 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg3 << 0xC);
}
