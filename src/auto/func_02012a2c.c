#include "m2c.h"

M2C_UNK func_02011450(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020114c0(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_02011608();                                /* extern */

s32 func_02012a2c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02011608();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if ((arg1 != 0) && (arg1 != 1)) {
        return 6;
    }
    func_02011450(0x19, arg0);
    var_r0 = func_020114c0(0x19, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
