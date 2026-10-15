#include "m2c.h"

u32 func_02070d74(void *arg0, u32 arg1, s32 arg2) {
    u32 temp_r3;
    u32 var_ip;
    u32 var_r1;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x9A8);
    var_ip  = 0;
    if (arg2 != 0) {
        if (temp_r3 < arg1) {
            var_r1 = 0;
            var_ip = -1U;
        } else {
            var_r1 = temp_r3 - arg1;
        }
    } else {
        var_r1 = temp_r3 + arg1;
        if (var_r1 > 0x98967FU) {
            var_r1 = 0x98967F;
            var_ip = 1;
        }
    }
    M2C_FIELD(arg0, u32 *, 0x9A8) = var_r1;
    return var_ip;
}
