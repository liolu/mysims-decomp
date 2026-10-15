#include "m2c.h"

M2C_UNK func_0205b758(M2C_UNK, s32);                /* extern */
s32 func_0205eb04();                                /* extern */

void func_0205eb48(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = arg1;
    temp_r0 = func_0205eb04();
    if (temp_r0 == -1) {
        return;
    }
    if (temp_r0 < var_r4) {
        var_r4 = 0;
    }
    func_0205b758(arg0, var_r4);
}
