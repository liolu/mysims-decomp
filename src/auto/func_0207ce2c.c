#include "m2c.h"

extern void *data_02118998;

s32 func_0207ce2c(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_02118998, s32 *, 0x3CB8) != 0) {
        var_r0 = 1;
    }
    return var_r0;
}
