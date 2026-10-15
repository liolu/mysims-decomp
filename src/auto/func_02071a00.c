#include "m2c.h"

void func_02071a00(void *arg0, s32 arg1) {
    u32 temp_r1;
    u32 var_r1;

    temp_r1 = M2C_FIELD(arg0, volatile u32 *, 0xDC);
    if (arg1 != 0) {
        var_r1 = temp_r1 + 1;
    } else {
        var_r1 = temp_r1 + 2;
    }
    M2C_FIELD(arg0, volatile u32 *, 0xDC) = var_r1;
    if ((u32) M2C_FIELD(arg0, volatile u32 *, 0xDC) > 0x0CDFE5FFU) {
        M2C_FIELD(arg0, volatile u32 *, 0xDC) = 0x0CDFE5FFU;
    }
}
