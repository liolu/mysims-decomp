#include "m2c.h"

s32 func_020bf828(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_lr;
    s32 temp_r2;
    s32 var_ip;

    var_ip = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
        temp_lr = arg1 - ((s32) M2C_FIELD(arg0, s32 *, 4) >> 0xC);
        temp_r2 = arg2 - ((s32) M2C_FIELD(arg0, s32 *, 8) >> 0xC);
        if (((s32) M2C_FIELD(arg0, s32 *, 0x98) <= temp_lr) && (temp_lr <= (s32) M2C_FIELD(arg0, s32 *, 0x9C)) &&
            ((s32) M2C_FIELD(arg0, s32 *, 0xA0) <= temp_r2) && (temp_r2 <= (s32) M2C_FIELD(arg0, s32 *, 0xA4))) {
            var_ip = 1;
        } else {
            var_ip = 0;
        }
    }
    return var_ip;
}
