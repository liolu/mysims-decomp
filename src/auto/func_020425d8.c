#include "m2c.h"

s32 func_020425d8(void *arg0, u16 arg1, u16 arg2) {
    s32 var_r0;
    u16 var_r1;
    u16 var_r2;

    var_r1 = arg1;
    var_r2 = arg2;
    if ((var_r1 != 0) && (var_r2 != 0)) {

    } else {
        var_r1 = M2C_FIELD(arg0, u16 *, 0x27D0);
        var_r2 = M2C_FIELD(arg0, u16 *, 0x27D2);
    }
    var_r0 = -1;
    if ((var_r1 == 1) && (var_r2 == 2)) {
        var_r0 = 0;
    }
    if ((var_r1 == 8) && (var_r2 == 3)) {
        var_r0 = 1;
    }
    if ((var_r1 == 8) && (var_r2 == 4)) {
        var_r0 = 2;
    }
    if ((var_r1 == 8) && (var_r2 == 5)) {
        var_r0 = 3;
    }
    return var_r0;
}
