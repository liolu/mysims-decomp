#include "m2c.h"

s32 func_0209c328(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x6F4C);
    var_r0  = 0;
    if (temp_r1 < 0) {
        return 0;
    }
    if (temp_r1 < 0x32) {
        var_r0 = 1;
    }
    return var_r0;
}
