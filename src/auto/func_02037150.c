#include "m2c.h"

extern s32 data_020d8aa8;

void func_02037150(void *arg0) {
    data_020d8aa8                = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
