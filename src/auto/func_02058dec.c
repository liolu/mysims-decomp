#include "m2c.h"

s32 func_02058dec(void *arg0) {
    s32 var_r2;
    void *var_r0;

    var_r0 = arg0;
    var_r2 = 0;
loop_1:
    if (M2C_FIELD(var_r0, s32 *, 0x20) != 0) {
        return 1;
    }
    var_r2 += 1;
    var_r0 += 0x1C;
    if (var_r2 >= 4) {
        return 0;
    }
    goto loop_1;
}
