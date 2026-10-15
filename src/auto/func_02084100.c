#include "m2c.h"

extern M2C_UNK data_020d27bc;

s32 func_02084100(u32 arg0) {
    u32 var_r0;

    var_r0 = arg0;
    if (var_r0 >= 4U) {
        var_r0 = 0;
    }
    return *((M2C_UNK *) ((s8 *) &data_020d27bc + (var_r0 * 8)));
}
