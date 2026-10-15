#include "m2c.h"

void func_02009804(void *arg0, s32 arg1, u32 *arg2) {
    M2C_FIELD(arg0, s32 *, 0)  = arg1;
    M2C_FIELD(arg0, u32 *, 4)  = (u32) ((u32) *arg2 >> 8);
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    M2C_FIELD(arg0, s16 *, 8)  = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
}
