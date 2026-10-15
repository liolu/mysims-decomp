#include "m2c.h"

M2C_UNK func_02060218(s32, s32);                    /* extern */
s32 func_02081dbc(s32, s32);                        /* extern */
extern s32 data_02118998;

s32 func_020742ec(s32 *arg0) {
    s32 var_r4;

    var_r4 = *arg0;
    if (func_02081dbc(data_02118998 + 0x380C, var_r4 - 1) == 0) {
        var_r4 = 0x12;
    }
    func_02060218(data_02118998 + 0x9728, var_r4);
    return 1;
}
