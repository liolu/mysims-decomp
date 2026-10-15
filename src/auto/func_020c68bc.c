#include "m2c.h"

extern M2C_UNK data_020d6a4c;

void *func_020c68bc(u32 arg0) {
    u32 var_r0;

    var_r0 = arg0;
    if (var_r0 >= 0x17U) {
        var_r0 = 0;
    }
    return (M2C_UNK *) ((s8 *) &data_020d6a4c + (var_r0 * 0x10));
}
