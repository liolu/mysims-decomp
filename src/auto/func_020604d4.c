#include "m2c.h"

s32 func_02006718(void *);                          /* extern */

s32 func_020604d4(void *arg0) {
    s32 var_r2;

    var_r2 = 1;
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        if (func_02006718(arg0 + 8) != 0) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
    }
    return var_r2;
}
