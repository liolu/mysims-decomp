#include "m2c.h"

M2C_UNK func_0200701c(M2C_UNK, s32);                /* extern */
M2C_UNK func_02007040();                            /* extern */
M2C_UNK func_02016e34(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02014bf4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0200701c(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02007040();
    func_02016e34(arg2, arg0, arg1);
}
