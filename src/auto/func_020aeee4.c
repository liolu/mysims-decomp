#include "m2c.h"

void func_020aeee4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) < 2) {
        M2C_FIELD(arg0, s32 *, 0x44) = 2;
    }
}
