#include "m2c.h"

extern M2C_UNK data_020d5e18;

s32 func_020ad910(u32 arg0) {
    u32 var_r0;

    var_r0 = arg0;
    if (var_r0 >= 0x17U) {
        var_r0 = 0;
    }
    return *((M2C_UNK *) ((s8 *) &data_020d5e18 + (var_r0 * 4)));
}
