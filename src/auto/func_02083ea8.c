#include "m2c.h"

void func_02083ea8(void *arg0, s32 arg1) {
    s32 var_r1;
    void *temp_r0;

    var_r1  = arg1;
    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (var_r1 >= 4) {
        var_r1 = 4;
    }
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x20) = var_r1;
    }
}
