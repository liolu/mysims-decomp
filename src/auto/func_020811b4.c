#include "m2c.h"

s32 func_0200cb80(M2C_UNK *);                       /* extern */
M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_02083b94(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_020fb6c0;
extern M2C_UNK data_020fb6c7;

s32 func_020811b4(void *arg0) {
    u8 sp0[24];
    s32 var_r4;

    var_r4 = 0;
    if (func_0200cb80(&data_020fb6c0) != 0) {
        func_0201a678(sp0, &data_020fb6c7);
        var_r4 = func_02083b94(M2C_FIELD(arg0, s32 *, 4), sp0);
    }
    return var_r4;
}
