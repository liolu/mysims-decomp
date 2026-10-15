#include "m2c.h"

extern void *data_02118994;

s32 func_02074388(u32 *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((u32) *arg0 <= (u32) M2C_FIELD(data_02118994, u16 *, 0x9A2)) {
        var_r0 = 1;
    }
    return var_r0;
}
