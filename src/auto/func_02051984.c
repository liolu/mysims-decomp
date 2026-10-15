#include "m2c.h"

void func_02051984(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0xEA0) = arg4;
    M2C_FIELD(arg0, s32 *, 0xEA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xEA8) = arg3;
}
