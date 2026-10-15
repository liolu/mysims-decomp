#include "m2c.h"

void func_0203690c(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x119C) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    *(s32 *) 0x04000540 = (var_r0 * 2) | 1;
}
