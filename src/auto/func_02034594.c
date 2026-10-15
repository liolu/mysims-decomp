#include "m2c.h"

M2C_UNK func_020346a4(s32, void *);                 /* extern */

void func_02034594(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 != 0) {
        func_020346a4(temp_r0, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
