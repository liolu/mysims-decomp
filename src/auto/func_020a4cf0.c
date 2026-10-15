#include "m2c.h"

M2C_UNK func_020363c8(s32, void *);                 /* extern */

void func_020a4cf0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C8);
    if (temp_r0 == 0) {
        return;
    }
    func_020363c8(temp_r0 + 0x1004, arg0 + 0x18);
}
