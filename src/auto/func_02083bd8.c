#include "m2c.h"

s32 func_02083bd8(void *arg0, u32 arg1) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    var_r0  = 0;
    if (temp_r3 == NULL) {
        return 0;
    }
    if (arg1 < (u32) M2C_FIELD(temp_r3, u32 *, 4)) {
        var_r0 = (arg1 * 0x30) + (s32) (temp_r3 + 0x24);
    }
    return var_r0;
}
