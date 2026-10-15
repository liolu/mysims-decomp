#include "m2c.h"

M2C_UNK func_0202ee6c(s32 *, M2C_UNK);              /* extern */
s32 func_0205a9a0(M2C_UNK);                         /* extern */
s32 *func_0205a9c0(M2C_UNK);                        /* extern */

void func_0205ae24(M2C_UNK arg0, M2C_UNK arg1) {
    s32 *temp_r0;
    s32 var_r1;

    if (func_0205a9a0(arg1) != 0) {
        return;
    }
    temp_r0 = func_0205a9c0(arg1);
    if (*temp_r0 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        return;
    }
    func_0202ee6c(temp_r0, arg0);
}
