#include "m2c.h"

s32 func_02050ca4(u16, u16);                        /* extern */
M2C_UNK func_020518c8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02055354(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02055e28(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02050c14(void *arg0) {
    u32 temp_r1;

    func_02055354(arg0 + 0x8EC, func_02050ca4((u16) M2C_FIELD(arg0, s32 *, 0x8E4), (u16) M2C_FIELD(arg0, s32 *, 0x8E8)) + 8,
                  0);
    if (M2C_FIELD(arg0, u8 *, 0x9F0) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x8E4) == 0x7C) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x8E8) & 0xF;
        if (temp_r1 >= 2U) {
            func_020518c8(arg0, temp_r1 + 2, 0);
        }
    }
    func_02055e28(arg0 + 0x8EC, 0, 0, 0);
}
