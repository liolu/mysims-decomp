#include "m2c.h"

void func_02070734(void *arg0) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = 0x40 - M2C_FIELD(arg0, s32 *, 0x194);
    var_r2  = (s32) (temp_r1 + ((u32) (temp_r1 >> 1) >> 0x1E)) >> 2;
    if (var_r2 > 0x10) {
        var_r2 = 0x10;
    } else if (var_r2 < 0) {
        var_r2 = 0;
    }
    *(s16 *) 0x04000052 = var_r2 | ((0x10 - var_r2) << 8);
}
