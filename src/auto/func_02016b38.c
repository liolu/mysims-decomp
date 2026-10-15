#include "m2c.h"

s32 func_020120e0(s32);                             /* extern */
M2C_UNK func_02016fbc(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0210fb40;

s32 func_02016b38(void) {
    s32 var_r4;

    var_r4 = func_020120e0(M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s32 *, 0x508));
    func_02016fbc(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
