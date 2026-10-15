#include "m2c.h"

s32 func_02034e98(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02095218(s32 arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_02034e98(arg0 + 0x170C, arg1, 1);
    if (var_r0 == 0xFF) {
        var_r0 = 0xFFFE;
    }
    return var_r0;
}
