#include "m2c.h"

s32 func_020aefa4(void *arg0) {
    s32 var_r3;

    var_r3 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x1C) == 0) && (var_r3 = 1, (M2C_FIELD(arg0, s32 *, 0x20) == 1))) {
        if ((u32) (M2C_FIELD(arg0, s32 *, 0x24) - 0xA) <= 1U) {
            var_r3 = 0;
        }
    }
    return var_r3;
}
