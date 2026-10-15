#include "m2c.h"

M2C_UNK func_02063fdc(void *, M2C_UNK, u8);         /* extern */
M2C_UNK func_0206402c(void *, M2C_UNK, s32, u8);    /* extern */

void func_020951d4(void *arg0, M2C_UNK arg1, s32 arg2) {
    if (arg2 != 0xFFFE) {
        func_0206402c(arg0 + 0x1D14, arg1, arg2, M2C_FIELD(arg0, u8 *, 0x1679));
        return;
    }
    func_02063fdc(arg0 + 0x1D14, arg1, M2C_FIELD(arg0, u8 *, 0x1679));
}
