#include "m2c.h"

s32 func_0207027c(s32);                             /* extern */
extern s32 data_02118998;

s32 func_0207555c(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_0207027c(data_02118998 + 0x812C) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
