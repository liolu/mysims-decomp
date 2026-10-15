#include "m2c.h"

M2C_UNK func_020634f8(void *, M2C_UNK);             /* extern */

s32 func_0208c57c(void *arg0) {
    s32 var_r5;

    M2C_FIELD(arg0, volatile s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xB4) + 1);
    var_r5                                = 0;
    func_020634f8(arg0 + 0x30, 0x1000);
    if (M2C_FIELD(arg0, volatile s32 *, 0xB0) & 2) {
        if ((M2C_FIELD(arg0, volatile s32 *, 0x4C) != 0) && (M2C_FIELD(arg0, volatile u8 *, 0xA4) != 0)) {

        } else {
            var_r5 = 1;
        }
        if (var_r5 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xB0) & ~2);
        }
    }
    return var_r5;
}
