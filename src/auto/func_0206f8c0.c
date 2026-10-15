#include "m2c.h"

s32 func_0206f8c0(void *arg0) {
    s32 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x150) != M2C_FIELD(arg0, s32 *, 0x158)) {
        var_r3 = 1;
    } else if ((M2C_FIELD(arg0, s32 *, 0x194) == 0) && (M2C_FIELD(arg0, s32 *, 0x198) == 0)) {

    } else {
        var_r3 = 1;
    }
    return var_r3;
}
