#include "m2c.h"

M2C_UNK func_020633d8(s32);                         /* extern */
M2C_UNK func_02063514(s32, s32, s32, s32);          /* extern */

void func_02086478(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_020633d8(arg0 + 4);
    func_02063514(arg0 + 4, arg3, arg3 + 0x18, arg4);
}
