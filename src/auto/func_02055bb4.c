#include "m2c.h"

s32 func_02055bb4(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r3;

    var_r3 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x104) != 0) && (temp_r2 = M2C_FIELD(arg0, s32 *, 0x1F8), (temp_r2 != 0))) {
        if ((arg1 >= 0) && (arg1 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14C), u8 *, 0x17))) {
            var_r3 = (arg1 * 0x58) + temp_r2;
        }
    }
    return var_r3;
}
