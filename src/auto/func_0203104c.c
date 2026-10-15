#include "m2c.h"

M2C_UNK func_0200a0a8(s32, s32);                    /* extern */
M2C_UNK func_0200ac94(s32);                         /* extern */
M2C_UNK func_02030f9c(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0203104c(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02030f9c(arg0, arg2, arg3);
    func_0200a0a8(arg0, arg0 + arg1);
    func_0200ac94(arg0);
}
