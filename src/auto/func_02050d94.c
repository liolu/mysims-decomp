#include "m2c.h"

s32 func_02050d94(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xE6C) != 4) {
        var_r2                        = 1;
        M2C_FIELD(arg0, s32 *, 0xE6C) = 4;
    }
    return var_r2;
}
