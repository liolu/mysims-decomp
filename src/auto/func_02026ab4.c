#include "m2c.h"

void func_02026ab4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r1;
    s32 var_r1_2;

    temp_r1 = M2C_FIELD(arg0, volatile s32 *, 0x24);
    if (arg1 != 0) {
        var_r1 = temp_r1 | 1;
    } else {
        var_r1 = temp_r1 & ~1;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x24) = var_r1;
    temp_r1_2                             = M2C_FIELD(arg0, volatile s32 *, 0x24);
    if (arg2 != 0) {
        var_r1_2 = temp_r1_2 | 2;
    } else {
        var_r1_2 = temp_r1_2 & ~2;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x24) = var_r1_2;
}
