#include "m2c.h"

s32 func_02052b68(void *arg0) {
    s32 var_r2;
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0x10);
    var_r2  = 0;
    if ((temp_r1 != 1) && (temp_r1 != 8)) {

    } else if ((u32) M2C_FIELD(arg0, u16 *, 0x12) > 1U) {
        var_r2 = 1;
    }
    return var_r2;
}
