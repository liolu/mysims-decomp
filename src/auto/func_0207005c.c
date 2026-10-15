#include "m2c.h"

s32 func_0207005c(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x1AD) == 0) {
        var_r2                       = 1;
        M2C_FIELD(arg0, u8 *, 0x1AD) = 1U;
    }
    return var_r2;
}
