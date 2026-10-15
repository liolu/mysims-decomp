#include "m2c.h"

M2C_UNK func_020552f0(void *, s32);                 /* extern */

void func_020ae6dc(void *arg0) {
    s32 temp_r2;

    if (M2C_FIELD(arg0, u8 *, 0x210) != 0) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x204);
        if (temp_r2 != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x20C) <= 0) {
                return;
            }
            func_020552f0(arg0 + 4, temp_r2 + 0x1004);
        }
    }
}
