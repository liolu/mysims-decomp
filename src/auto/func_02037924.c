#include "m2c.h"

s32 func_020353bc(s32);                             /* extern */

s32 func_02037924(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020353bc(arg0 + 0x28) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
