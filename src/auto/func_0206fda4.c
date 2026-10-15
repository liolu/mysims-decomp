#include "m2c.h"

void func_0206fda4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1A4) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x150) != 1) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x1B0) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x1B4) == -1) {
        M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x1AE) = 1;
}
