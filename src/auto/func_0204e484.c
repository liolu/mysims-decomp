#include "m2c.h"

void func_0204e484(void *arg0, s32 arg1) {
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x1D68)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1D6C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1DF4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1DF4) | 4);
}
