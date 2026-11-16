/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

s32 func_020702a8(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (((u32) (M2C_FIELD(arg0, s32 *, 0x150) - 0xA) <= 1U) && ((s32) M2C_FIELD(arg0, s32 *, 0x13C0) > 5)) {
        var_r2 = 1;
    }
    return var_r2;
}
