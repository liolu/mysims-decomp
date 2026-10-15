#include "m2c.h"

s32 func_02034710(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020369c0(void *, s32);                 /* extern */
s32 func_020369e4();                                /* extern */

s32 func_02036b10(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020369e4(arg0);
    if (func_02034710(arg0, temp_r0, arg1, arg2, M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14)) != 0) {
        return temp_r0;
    }
    func_020369c0(arg0, temp_r0);
    return 0;
}
