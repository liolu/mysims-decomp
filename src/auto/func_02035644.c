#include "m2c.h"

u32 func_02035644(s32 *arg0) {
    u32 var_r0;

    var_r0 = (u32) (*arg0 & 0xF0) >> 4;
    if ((s32) var_r0 >= 4) {
        var_r0 = -1U;
    }
    return var_r0;
}
