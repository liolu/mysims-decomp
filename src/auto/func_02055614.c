#include "m2c.h"

s32 func_020389b8(void *);                          /* extern */
s32 func_02038c14(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02038f18(void *, s32);                 /* extern */
M2C_UNK func_02054c14(void *, M2C_UNK, s32, s32, s32); /* extern */

void func_02055614(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;

    if ((M2C_FIELD(arg0, u8 *, 0x104) == 0) && (M2C_FIELD(arg0, u8 *, 0x105) == 0)) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    temp_r5 = func_02038c14(arg0 + 0xBC, 0);
    func_02054c14(arg0, arg1, arg2, temp_r5, func_020389b8(arg0 + 0xD4));
    func_02038f18(arg0 + 0x144, func_02038c14(arg0 + 0xBC, 0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if (temp_r0_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x180) = temp_r0_2;
    }
}
