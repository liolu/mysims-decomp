#include "m2c.h"

M2C_UNK func_0206353c(void *, s32);                 /* extern */

void func_020bf7fc(void *arg0, s8 arg1) {
    s32 var_r1;

    if (!(M2C_FIELD(arg0, s32 *, 0x10) & 1)) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x8C) = arg1;
    if (arg1 != 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x90);
    } else {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x94);
    }
    func_0206353c(arg0 + 0x14, var_r1);
}
