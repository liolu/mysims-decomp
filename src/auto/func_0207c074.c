#include "m2c.h"

u32 func_02082108(s32, s32);                        /* extern */
extern s32 data_02118998;

s32 func_0207c074(void *arg0) {
    s32 var_r4;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0);
    var_r4  = 0;
    if ((temp_r1 < 1U) || (temp_r1 > 5U)) {
        return 0;
    }
    if (func_02082108(data_02118998 + 0x380C, temp_r1 - 1) >= (u32) M2C_FIELD(arg0, u32 *, 4)) {
        var_r4 = 1;
    }
    return var_r4;
}
