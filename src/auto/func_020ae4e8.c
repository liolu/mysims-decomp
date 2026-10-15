#include "m2c.h"

M2C_UNK func_02055794(void *, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020ae4e8(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    if (M2C_FIELD(arg0, u8 *, 0x210) != 0) {
        return;
    }
    if (arg5 < 0) {
        return;
    }
    if (arg5 >= 3) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x204) = arg1;
    func_02055794(arg0 + 4, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0x208) = arg5;
    M2C_FIELD(arg0, s32 *, 0x20C) = 0;
    M2C_FIELD(arg0, u8 *, 0x210)  = 1U;
    M2C_FIELD(arg0, s8 *, 0x211)  = 0;
}
