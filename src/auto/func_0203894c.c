#include "m2c.h"

M2C_UNK func_020271c8(s32, M2C_UNK);                /* extern */
M2C_UNK func_020272cc(s32, M2C_UNK);                /* extern */
s32 func_0202ad84();                                /* extern */

void func_0203894c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (M2C_FIELD(arg0, s32 *, 0x24) != 0)) {
        temp_r0 = func_0202ad84();
        if (temp_r0 == 0) {
            return;
        }
        func_020271c8(temp_r0, arg1);
        func_020272cc(temp_r0, arg1);
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) (M2C_FIELD(arg0, u16 *, 0x28) | 2);
    }
}
