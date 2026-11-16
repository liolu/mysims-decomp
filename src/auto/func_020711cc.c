/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020711cc(s32 *arg0, s32 arg1) {
    s32 var_r2;
    s32 var_r3;
    u16 temp_r0;

    var_r2 = 0;
    var_r3 = 0;
    if (arg1 > 0) {
        do {
            temp_r0 = M2C_FIELD((*arg0 + (var_r3 * 2)), u16 *, 0x2928);
            var_r3 += 1;
            var_r2 += temp_r0;
        } while (var_r3 < arg1);
    }
    return var_r2;
}
