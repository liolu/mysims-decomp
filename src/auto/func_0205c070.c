#include "m2c.h"

s32 func_0205b0b8(s32);                             /* extern */
s32 func_0205b0f0(s32, s32);                        /* extern */

s32 func_0205c070(void *arg0, s8 *arg1) {
    s32 var_r4;
    s8 *var_r5;

    var_r5 = arg1;
    var_r4 = 0;
    if (*var_r5 != 0) {
        do {
            var_r5 += 1;
            var_r4 += M2C_FIELD(arg0, s16 *, 0x5C) + func_0205b0f0(arg0 + 0x20, func_0205b0b8(arg0 + 0x20));
        } while (*var_r5 != 0);
    }
    return var_r4;
}
