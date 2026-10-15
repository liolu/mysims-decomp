#include "m2c.h"

s32 func_02070e80(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    u8 temp_r2;

    temp_r3 = arg0 + 0xCAA;
    temp_r2 = *(s8 *) (temp_r3 + arg1);
    var_r0  = 0;
    if ((u32) temp_r2 < 0x14U) {
        *(s8 *) (temp_r3 + arg1) = temp_r2 + 1;
        var_r0                   = 1;
    }
    return var_r0;
}