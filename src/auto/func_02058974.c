#include "m2c.h"

s32 func_02058974(void *arg0) {
    s32 var_r2;
    s32 var_r3;
    u8 temp_ip;

    temp_ip = M2C_FIELD(arg0, u8 *, 0x6C);
    if (temp_ip == 0) {
        return -1;
    }
    var_r2 = -1;
    var_r3 = 0;
loop_3:
    if (temp_ip == M2C_FIELD((arg0 + var_r3), u8 *, 0x6D)) {
        var_r2 = var_r3;
    } else {
        var_r3 += 1;
        if (var_r3 < 0x14) {
            goto loop_3;
        }
    }
    if (var_r2 == -1) {
        return -1;
    }
    return M2C_FIELD((arg0 + (var_r2 * 4)), s32 *, 4);
}
