#include "m2c.h"

s32 func_02095734();                                /* extern */
s32 func_020978e0(void *, M2C_UNK);                 /* extern */

s32 func_02095610(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r5;
    s32 var_r7;

    var_r5 = 0;
    var_r7 = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x9C) & 1) {
        var_r5 = 1;
    } else if ((func_02095734() > 0) && (func_020978e0(arg0, arg2) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 1);
        if (var_r7 < 1) {
            var_r7 = 1;
        } else if (var_r7 > 3) {
            var_r7 = 3;
        }
        M2C_FIELD(arg0, s32 *, 0x88) = (s32) (var_r7 - 1);
        var_r5                       = 1;
    }
    return var_r5;
}
