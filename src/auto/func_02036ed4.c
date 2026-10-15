#include "m2c.h"

extern s32 data_020d8aa0;

void func_02036ed4(void *arg0) {
    data_020d8aa0                = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
