#include "m2c.h"

s32 func_020353bc(s32);                             /* extern */

s32 func_0203787c(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((func_020353bc(arg0 + 0x28) != 0) || (func_020353bc(arg0 + 0x44) != 0)) {
        var_r4 = 1;
    }
    return var_r4;
}
