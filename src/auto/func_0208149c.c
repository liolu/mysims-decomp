#include "m2c.h"

s32 func_0200cb80(M2C_UNK *);                       /* extern */
M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_02083b94(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_020fb6c0;
extern M2C_UNK data_020fb733;

s32 func_0208149c(void *arg0, s32 arg1) {
    u8 sp0[16];
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg1;
    var_r4 = 0;
    if (func_0200cb80(&data_020fb6c0) != 0) {
        if (var_r5 == 0) {
            var_r5 = M2C_FIELD(arg0, s32 *, 0x1AC);
        }
        func_0201a678(sp0, &data_020fb733, var_r5);
        var_r4 = func_02083b94(M2C_FIELD(arg0, s32 *, 0xC), sp0);
        if (var_r4 != 0) {
            M2C_FIELD(arg0, s32 *, 0x1AC) = var_r5;
        }
    }
    return var_r4;
}
