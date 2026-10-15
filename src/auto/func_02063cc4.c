#include "m2c.h"

s32 func_02063cc4(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x15) != 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    } else if (M2C_FIELD(arg0, u8 *, 0x14) != 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_r2;
}
