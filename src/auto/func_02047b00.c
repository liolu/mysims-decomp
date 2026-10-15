#include "m2c.h"

s32 func_02060b38(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02047b00(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r1;
    s32 var_ip;

    temp_r1 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x11F0);
    var_ip  = 0;
    if (temp_r1 != 0) {
        var_ip = func_02060b38((arg2 * 0xC) + temp_r1, arg3, 0);
    }
    return var_ip;
}
