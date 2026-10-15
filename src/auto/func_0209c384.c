#include "m2c.h"

M2C_UNK func_020634f8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02086cac(void *, M2C_UNK);             /* extern */

s32 func_0209c384(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    func_020634f8(arg0 + 0x30, 0x1000);
    if (M2C_FIELD(arg0, volatile s32 *, 0xB0) & 2) {
        if ((M2C_FIELD(arg0, volatile s32 *, 0x4C) != 0) && (M2C_FIELD(arg0, volatile u8 *, 0xA4) != 0)) {

        } else {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xB0) & ~2);
            func_02086cac(arg0, 0);
        }
    }
    return var_r4;
}
