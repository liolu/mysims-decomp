#include "m2c.h"

M2C_UNK func_020363c8(s32, void *);                 /* extern */

void func_02052a74(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xFB0);
    if ((temp_r1 != 0) && (M2C_FIELD(arg0, u8 *, 0x11C) != 0)) {
        func_020363c8(temp_r1 + 0x1004, arg0 + 0x18);
    }
}
