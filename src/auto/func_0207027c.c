/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

s32 func_0207027c(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (((u32) (M2C_FIELD(arg0, s32 *, 0x150) - 7) <= 1U) && ((s32) M2C_FIELD(arg0, s32 *, 0x13C0) > 0xB)) {
        var_r2 = 1;
    }
    return var_r2;
}
