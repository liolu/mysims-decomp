#include "m2c.h"

s32 func_02082710(s32);                             /* extern */
extern s32 data_02118998;

s32 func_02076138(s32 *arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = *arg0;
    var_r4 = 0;
    if (var_r5 == 0) {
        var_r5 = 1;
    }
    if (func_02082710(data_02118998 + 0x380C) >= var_r5) {
        var_r4 = 1;
    }
    return var_r4;
}
