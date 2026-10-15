#include "m2c.h"

s32 func_02034358();                                /* extern */
M2C_UNK func_02034398(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_020343dc(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    func_02034398(arg0, arg1, arg2 * func_02034358());
}
