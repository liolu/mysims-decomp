#include "m2c.h"

void func_020af128(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 var_ip;
    s32 var_lr;
    void *temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 8);
    temp_r3                      = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r3 <= 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    var_ip = 0;
    if (temp_r3 <= 0) {
        return;
    }
    var_lr = 0;
    do {
        temp_r3_2                         = M2C_FIELD(arg0, s32 *, 4) + var_lr;
        M2C_FIELD(temp_r3_2, s32 *, 0xA4) = (s32) M2C_FIELD(arg1, s32 *, 0);
        var_ip += 1;
        M2C_FIELD(temp_r3_2, s32 *, 0xA8) = (s32) M2C_FIELD(arg1, s32 *, 4);
        var_lr += 0x214;
        M2C_FIELD(temp_r3_2, s32 *, 0xAC) = (s32) M2C_FIELD(arg1, s32 *, 8);
    } while (var_ip < (s32) M2C_FIELD(arg0, s32 *, 8));
}
