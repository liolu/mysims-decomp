#include "engine.h"
#include "m2c.h"

M2C_UNK func_02063cc4(M2C_UNK);
M2C_UNK func_02063cec(M2C_UNK, M2C_UNK);

s32 func_02063d24(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r6;

    var_r6  = 0;
    temp_r5 = func_02063cc4(arg0);
    temp_r0 = func_02063cec(arg0, arg1);
    if ((temp_r5 != 0) && (temp_r0 != 0)) {
        if ((u32) arg2 < (u32) M2C_FIELD(temp_r0, u32 *, 4)) {
            var_r6 = temp_r5 + 0x10 + (*(M2C_UNK *) temp_r5 * 8) + ((M2C_FIELD(temp_r0, s32 *, 0) + arg2) * 0x10);
        }
    }
    return var_r6;
}
