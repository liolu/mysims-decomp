#include "m2c.h"

M2C_UNK func_02002360(M2C_UNK *, void *, M2C_UNK *); /* extern */
M2C_UNK func_02002394(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_0203908c(M2C_UNK *, s32, s32, s32, s32); /* extern */

s32 func_02043370(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2, M2C_UNK arg3) {
    u8 sp4[12];
    s32 var_r4;

    var_r4 = 0;
    func_0203908c(sp4, M2C_FIELD(arg0, s32 *, 0xDA8), M2C_FIELD(arg0, s32 *, 0xDAC), M2C_FIELD(arg0, s32 *, 0xDB0),
                  (s32) M2C_FIELD(arg0, u16 *, 0x99A));
    func_02002360(sp4, arg0 + 0x8F8, arg1);
    func_02002360(arg1, arg0 + 0xD18, sp4);
    func_02002360(sp4, arg0 + 0xD0C, arg2);
    func_02002394(sp4, arg0 + 0xD0C, arg3);
    if ((M2C_FIELD(arg0, s32 *, 0xDA8) == 0) && (M2C_FIELD(arg0, s32 *, 0xDB0) == 0)) {

    } else {
        var_r4 = 1;
    }
    return var_r4;
}
