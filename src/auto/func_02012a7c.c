#include "m2c.h"

M2C_UNK func_02011450(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020114c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02011608();                                /* extern */

s32 func_02012a7c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02011608();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02011450(0x1D, arg0);
    var_r0 = func_020114c0(0x1D, 4, arg1, arg2, arg3, (s32) arg4);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
