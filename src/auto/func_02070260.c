#include "m2c.h"

s32 func_02070260(void *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1400) > -1) {
        var_r0 = 1;
    }
    return var_r0;
}
