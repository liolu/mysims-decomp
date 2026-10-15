#include "m2c.h"

M2C_UNK func_02060148(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_02071c54(s32, M2C_UNK);                    /* extern */

void func_020601bc(M2C_UNK arg0, s32 arg1) {
    M2C_UNK var_r4;
    u32 temp_r2;

    temp_r2 = (u32) ((arg1 & 0xFF00) << 8) >> 0x10;
    var_r4  = 0x1D;
    if ((temp_r2 >= 0xEU) && (temp_r2 <= 0x2FU)) {
        var_r4 = 0x1A;
    }
    func_02060148(arg0, var_r4, func_02071c54(arg1, 3));
}
