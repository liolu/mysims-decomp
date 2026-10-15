#include "m2c.h"

s32 func_02060788(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02060bfc(M2C_UNK *);                   /* extern */
M2C_UNK func_02060c20(M2C_UNK *);                   /* extern */
s32 func_02060ca4(M2C_UNK *, M2C_UNK);              /* extern */

s32 func_02060b38(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[76];
    s32 var_r4;

    func_02060bfc(sp0);
    var_r4 = 0;
    if (func_02060ca4(sp0, arg1) != 0) {
        var_r4 = func_02060788(arg0, sp0, arg2);
    }
    func_02060c20(sp0);
    return var_r4;
}
