#include "m2c.h"

extern void *data_02118998;

s32 func_0207b7c4(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_02118998, s32 *, 0x3C88) & 1) {
        var_r0 = 1;
    }
    return var_r0;
}
