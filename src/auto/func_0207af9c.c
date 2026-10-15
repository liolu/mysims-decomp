#include "m2c.h"

extern void *data_02118998;

s32 func_0207af9c(u32 *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((u32) M2C_FIELD(data_02118998, u32 *, 0x3C98) >= (u32) *arg0) {
        var_r0 = 1;
    }
    return var_r0;
}
