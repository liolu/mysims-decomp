#include "m2c.h"

extern void *data_02118994;

s32 func_02070e04(s32 arg0, s32 arg1) {
    s32 var_r0;
    u32 var_r1;

    var_r0 = 0;
    var_r1 = M2C_FIELD(data_02118994, u32 *, 0xCB8) + arg1;
    if (var_r1 >= 0x98967FU) {
        var_r1 = 0x98967F;
    } else {
        var_r0 = 1;
    }
    M2C_FIELD(data_02118994, u32 *, 0xCB8) = var_r1;
    return var_r0;
}
