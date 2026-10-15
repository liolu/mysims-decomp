#include "m2c.h"

s32 func_02005fa8();                                /* extern */
M2C_UNK func_02006000(u16);                         /* extern */
s32 func_02010028();                                /* extern */
M2C_UNK func_02010090(u16);                         /* extern */
M2C_UNK func_020100a0(u16);                         /* extern */
s32 func_0201060c(s32);                             /* extern */
M2C_UNK func_02010d98();                            /* extern */

s32 func_020c5cc4(void *arg0) {
    s32 temp_r0;
    s32 var_r8;
    s32 var_r9;

    var_r9 = 0;
    var_r8 = 0;
    if (func_02010028() == 0) {
        func_02010d98();
    }
    do {
        temp_r0                   = func_02005fa8();
        M2C_FIELD(arg0, s32 *, 8) = temp_r0;
        if (temp_r0 != -3) {
            var_r8 = 1;
            func_02010090((u16) temp_r0);
            if (func_0201060c(0x1202) != 0) {
                var_r9 = 1;
            } else {
                var_r9 = 0;
            }
            func_020100a0((u16) M2C_FIELD(arg0, s32 *, 8));
            func_02006000((u16) M2C_FIELD(arg0, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 8) = -3;
        }
    } while (var_r8 == 0);
    return var_r9;
}
