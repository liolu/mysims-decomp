#include "m2c.h"

void func_0205fa00(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) & ~0xFFFF);
    M2C_FIELD(arg0, s16 *, 0x17C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x174) = 3;
    M2C_FIELD(arg0, s32 *, 0x178) = 0;
}
