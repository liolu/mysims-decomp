#include "engine.h"
#include "m2c.h"

M2C_UNK func_02056d48(M2C_UNK, M2C_UNK);
M2C_UNK func_02057928(M2C_UNK, M2C_UNK);

s32 func_02057968(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;

    var_r4 = 0;
    var_r5 = 0;
loop_1:
    temp_r0 = func_02056d48(arg0, var_r5);
    if ((temp_r0 != 0) && (func_02057928(arg0, temp_r0) != 0)) {
        var_r4 = 1;
    } else {
        var_r5 += 1;
        if (var_r5 < 0x14) {
            goto loop_1;
        }
    }
    return var_r4;
}
