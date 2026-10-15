#include "m2c.h"

M2C_UNK func_0200a0a8(s32, s32);                    /* extern */
M2C_UNK func_0200aeb4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0200aee8(M2C_UNK, M2C_UNK);                /* extern */

void func_0203109c(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0200aee8(arg2, arg3)) {
        func_0200aeb4(arg2, arg3, 0);
    }
    func_0200a0a8(arg0, arg0 + arg1);
}
