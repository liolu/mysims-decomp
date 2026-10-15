#include "m2c.h"

s32 func_020353bc(s32);                             /* extern */

s32 func_020379b4(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020353bc(arg0 + 0x44) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
