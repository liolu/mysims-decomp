#include "m2c.h"

extern M2C_UNK data_020d2c64;

s32 func_0208403c(u32 arg0) {
    u32 var_r0;

    var_r0 = arg0;
    if (var_r0 >= 0x11U) {
        var_r0 = 0;
    }
    return (0xE * var_r0) + (s32) &data_020d2c64;
}
