#include "m2c.h"

void func_02063000(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (arg1 != 0) {
        var_r1 = temp_r1 | 1;
    } else {
        var_r1 = temp_r1 & ~1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r1;
}
