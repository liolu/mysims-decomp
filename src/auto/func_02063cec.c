#include "engine.h"
#include "m2c.h"

M2C_UNK func_02063cc4(M2C_UNK);

s32 func_02063cec(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = func_02063cc4(arg0);
    if ((temp_r0 != 0) && (arg1 >= 0) && ((u32) arg1 < (u32) * (M2C_UNK *) temp_r0)) {
        var_r4 = temp_r0 + 0x10 + (arg1 * 8);
    }
    return var_r4;
}
