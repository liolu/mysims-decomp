#include "m2c.h"

M2C_UNK func_020346a4(s32, void *);                 /* extern */

void func_020bfd10(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        func_020346a4(temp_r0, arg0 + 0xC);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r0_2 != 0) && (M2C_FIELD(arg0, s32 *, 0x38) != 0)) {
        func_020346a4(temp_r0_2, arg0 + 0x2C);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
