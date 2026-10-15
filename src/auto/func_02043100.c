#include "m2c.h"

s32 func_020556a4(void *);                          /* extern */

s32 func_02043100(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x8CD) != 0) {
        var_r2 = func_020556a4(arg0 + 0x8EC);
    }
    return var_r2;
}
