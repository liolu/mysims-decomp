#include "m2c.h"

extern void *data_02118998;

s32 func_0207afc4(u32 *arg0) {
    s32 var_r0;
    u32 temp_r1;
    u32 temp_r2;

    temp_r2 = *arg0;
    temp_r1 = M2C_FIELD(data_02118998, u32 *, 0x3C94);
    var_r0  = 0;
    if (temp_r2 != 0) {
        if (temp_r1 >= temp_r2) {
            var_r0 = 1;
        }
        return var_r0;
    }
    if ((s32) temp_r1 >= 0) {
        var_r0 = 1;
    }
    return var_r0;
}
