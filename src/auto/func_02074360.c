#include "m2c.h"

M2C_UNK func_020960d8();                            /* extern */
u32 func_02096140();                                /* extern */

s32 func_02074360(u32 *arg0) {
    s32 var_r4;

    var_r4 = 0;
    func_020960d8();
    if ((u32) *arg0 <= func_02096140()) {
        var_r4 = 1;
    }
    return var_r4;
}
