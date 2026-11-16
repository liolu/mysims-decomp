/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02056400(s32 arg0) {
    s32 temp_lr;
    s32 var_lr;
    s32 var_r4;
    s32 var_r5;

    var_r5 = 1;
    var_r4 = 0;
    do {
        temp_lr = M2C_FIELD((arg0 + (var_r4 * 4)), s32 *, 0x1D8);
        var_r4 += 1;
        if (temp_lr == 0) {
            var_lr = 1;
        } else {
            var_lr = 0;
        }
        if (var_r5 & var_lr) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
    } while (var_r4 < 4);
    return var_r5;
}
