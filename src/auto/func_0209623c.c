#include "m2c.h"

extern M2C_UNK data_020d407c;

u8 func_0209623c(u32 arg0) {
    u32 var_r0;
    u8 var_r1;

    var_r0 = arg0;
    if (var_r0 & 0xFF00) {
        var_r0 = 1;
    }
    var_r1 = 0;
    if (var_r0 < 0x14U) {
        var_r1 = (u8) ((s32) * ((u16 *) ((s8 *) &data_020d407c + (var_r0 * 0xC))) >> 8);
    }
    return var_r1;
}
