#include "m2c.h"

void func_020602c0(s32 arg0, s32 *arg1, u16 *arg2) {
    if (*arg1 != 0x1D) {
        return;
    }
    if ((u32) *arg2 < 0x104U) {
        return;
    }
    *arg1 = 0x21;
    *arg2 -= 0x104;
}
