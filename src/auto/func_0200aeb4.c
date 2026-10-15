#include "m2c.h"

M2C_UNK func_02007000(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200a1f4();                            /* extern */
M2C_UNK func_0200a208();                            /* extern */

void func_0200aeb4(s32 arg0, s32 arg1, s32 arg2) {
    func_0200a1f4();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02007000(arg0 + 0x3C + (arg1 * 4), 4);
    func_0200a208();
}
