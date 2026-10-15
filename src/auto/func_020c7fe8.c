#include "m2c.h"

M2C_UNK func_02043094();                            /* extern */

void func_020c7fe8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r0 == 0) {
        return;
    }
    if (temp_r0 != 0) {
        func_02043094();
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
}
