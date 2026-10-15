#include "m2c.h"

s32 func_020ae43c(s32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if ((arg1 >= 0) && (arg1 < 0x14)) {
        var_r2 = (arg1 * 0x50) + (arg0 + 0x660);
    }
    return var_r2;
}
