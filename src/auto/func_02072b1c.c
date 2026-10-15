#include "m2c.h"

extern void *data_02118998;

s32 func_02072b1c(s32 *arg0) {
    s8 var_r2;

    if (*arg0 != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    M2C_FIELD(data_02118998, s8 *, 0x39C9) = var_r2;
    return 1;
}
