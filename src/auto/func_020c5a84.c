#include "m2c.h"

s32 func_02005fa8();                                /* extern */
M2C_UNK func_02007000(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02010090(u16);                         /* extern */
M2C_UNK func_02010510(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, void *, s32, s32, s32, s32); /* extern */
extern M2C_UNK func_020c5a64;

s32 func_020c5a84(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0;
    s32 var_r8;

    var_r8 = 0;
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        temp_r0                   = func_02005fa8();
        M2C_FIELD(arg0, s32 *, 8) = temp_r0;
        if (temp_r0 != -3) {
            func_02007000(arg2, arg3);
            func_02010090((u16) M2C_FIELD(arg0, s32 *, 8));
            func_02010510(arg2, arg1, arg3, &func_020c5a64, arg0, 1, 7, 0xA, 2);
            var_r8                   = 1;
            M2C_FIELD(arg0, u8 *, 4) = 1U;
        }
    }
    return var_r8;
}
