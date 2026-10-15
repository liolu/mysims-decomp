#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02052c24(void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02053340(s32, s32);                    /* extern */
M2C_UNK func_0205350c(s32);                         /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
s32 func_02060b38(s32, M2C_UNK *, M2C_UNK);         /* extern */
extern M2C_UNK data_020dd8b8;

s32 func_02052b90(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    u8 sp0[32];
    s32 var_r4;

    var_r4 = arg3;
    if (var_r4 == 0) {
        var_r4 = arg0 + 0x4A0;
    }
    func_0201a678(sp0, &data_020dd8b8, arg1, arg2);
    if (func_02060b38(arg0 + 4, sp0, 0) != 0) {
        func_02053340(var_r4, M2C_FIELD(arg0, s32 *, 8));
        func_02060604(arg0 + 4);
        func_02052c24(arg0, arg1, arg2, var_r4);
        return 1;
    }
    func_0205350c(var_r4);
    return 0;
}
