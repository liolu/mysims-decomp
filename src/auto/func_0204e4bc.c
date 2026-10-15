#include "m2c.h"

void func_0204e4bc(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x8E4) != 1) {
        M2C_FIELD(arg0, s32 *, 0x1D74) = arg1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1D74) = (s32) (M2C_FIELD(arg0, s32 *, 0x8E8) - 1);
    }
    M2C_FIELD(arg0, s32 *, 0xDC8) = arg2;
}
