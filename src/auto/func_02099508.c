#include "m2c.h"

s32 func_02081dbc(s32, s32);                        /* extern */
extern M2C_UNK data_020d4c3c;
extern s32 data_02118998;

s32 func_02099508(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02081dbc(data_02118998 + 0x380C, 0x129) != 0) {
        var_r4 = ((s32 *) &data_020d4c3c)[(arg2 + (arg1 * 4))];
    }
    return var_r4;
}
