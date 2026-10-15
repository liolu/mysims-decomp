#include "m2c.h"

s32 func_02034710(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02036a10(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02036ad4(s32);                         /* extern */

s32 func_02036d10(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = arg1 * 0x2C;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x20);
    if (func_02034710(arg0, temp_r5 + temp_r4, arg2, 0x10, M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14)) == 0) {
        return 0;
    }
    if (func_02036a10(temp_r5 + temp_r4, arg3) != 0) {
        return 1;
    }
    func_02036ad4(temp_r5 + temp_r4);
    return 0;
}
