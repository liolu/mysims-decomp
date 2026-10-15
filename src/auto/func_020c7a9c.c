#include "m2c.h"

s32 func_02042f44(M2C_UNK);                         /* extern */
s32 func_020c5c94();                                /* extern */
s32 func_020c5cc4();                                /* extern */
M2C_UNK func_020c7c28(void *);                      /* extern */

s32 func_020c7a9c(void *arg0, s16 arg1) {
    s32 var_r0;
    s32 var_r4;

    var_r4 = 0;
    var_r0 = func_02042f44(0xC);
    if (var_r0 != 0) {
        var_r0 = func_020c5c94();
    }
    M2C_FIELD(arg0, s32 *, 0xA0) = var_r0;
    if (func_020c5cc4() != 0) {
        M2C_FIELD(arg0, s8 *, 0x92)  = 0;
        M2C_FIELD(arg0, s16 *, 0x90) = arg1;
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        M2C_FIELD(arg0, s32 *, 0x98) = 0;
        func_020c7c28(arg0);
        var_r4 = 1;
    }
    return var_r4;
}
