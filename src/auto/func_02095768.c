#include "m2c.h"

extern M2C_UNK data_020d779c;

s32 func_02095768(s32 arg0) {
    s32 var_r1;

    var_r1 = -1;
    if (arg0 >= 0) {
        var_r1 = *((M2C_UNK *) ((s8 *) &data_020d779c + (arg0 * 0x1EC))) & 3;
    }
    return var_r1;
}
