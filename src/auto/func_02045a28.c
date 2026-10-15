#include "m2c.h"

s32 func_02045a28(void *arg0) {
    s32 var_r0;
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0xDCC);
    var_r0  = 0;
    if ((u32) temp_r1 <= 3U) {
        return 1;
    }
    if ((u32) temp_r1 <= 7U) {
        var_r0 = 2;
    }
    return var_r0;
}
