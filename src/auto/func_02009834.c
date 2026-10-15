#include "engine.h"
#include "m2c.h"

void func_02009834(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, u32 *, 4)    = (u32) ((u32) * (M2C_UNK *) arg2 >> 8);
    M2C_FIELD(arg0, s8 *, 0x18)  = (s8) ((u32) (*(M2C_UNK *) arg2 << 0x1C) >> 0x1C);
    M2C_FIELD(arg0, s16 *, 0x14) = -1;
    M2C_FIELD(arg0, s32 *, 8)    = (s32) (arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x17)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s8 *, 0x16)  = 0;
}
