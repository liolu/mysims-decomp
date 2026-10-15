#include "m2c.h"

s32 func_02056d48(s32, s32);                        /* extern */
extern s32 data_02118998;

s32 func_02050ec8(s32 arg0) {
    s32 var_r5;
    s32 var_r6;

    var_r5 = 0;
    var_r6 = 0;
loop_1:
    if (arg0 == func_02056d48(data_02118998 + 0x273C, var_r6)) {
        var_r5 = var_r6;
    } else {
        var_r6 += 1;
        if (var_r6 < 0x14) {
            goto loop_1;
        }
    }
    return var_r5;
}
