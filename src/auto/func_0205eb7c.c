#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_0205b4e4(void *, s32);                 /* extern */
M2C_UNK func_0205b718(void *, M2C_UNK);             /* extern */
s32 *func_020603dc(s32);                            /* extern */
s32 func_020603ec();                                /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
s32 func_020606c0(void *, M2C_UNK *, M2C_UNK);      /* extern */

void func_0205eb7c(void *arg0, s32 arg1) {
    u8 sp0[32];
    s32 *temp_r0;
    s32 var_r2;
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 == M2C_FIELD(arg0, s32 *, 0x184)) {
        return;
    }
    if (var_r4 >= func_020603ec()) {
        var_r4 = -1;
    }
    if (var_r4 == -1) {
        func_02060604(arg0 + 0xA4);
        func_0205b4e4(arg0, 0);
    } else {
        temp_r0 = func_020603dc(var_r4);
        var_r2  = M2C_FIELD(arg0, s32 *, 0x188);
        if (var_r2 == -1) {
            var_r2 = 0;
        }
        func_0201a678(sp0, *temp_r0, var_r2 + 0x41);
        if (func_020606c0(arg0 + 0xA4, sp0, 0) != 0) {
            func_0205b4e4(arg0, M2C_FIELD(arg0, s32 *, 0xA8));
            func_0205b718(arg0, 0);
        } else {
            func_0205b4e4(arg0, 0);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x184) = var_r4;
}
