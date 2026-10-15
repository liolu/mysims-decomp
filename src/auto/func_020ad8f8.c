#include "m2c.h"

extern M2C_UNK data_020d5e74;

void *func_020ad8f8(u32 arg0) {
    u32 var_r0;

    var_r0 = arg0;
    if (var_r0 >= 0x17U) {
        var_r0 = 0;
    }
    return (M2C_UNK *) ((s8 *) &data_020d5e74 + (var_r0 * 0x10));
}
