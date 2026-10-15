#include "m2c.h"

s32 func_020c5a84(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_020c5bd0();                                /* extern */

s32 func_020c5f44(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = func_020c5bd0();
    if (temp_r0 > -1) {
        var_r4 = func_020c5a84(arg0, temp_r0, arg4, 4);
    }
    return var_r4;
}
