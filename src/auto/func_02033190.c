#include "m2c.h"

M2C_UNK func_0203310c();                            /* extern */

void func_02033190(void *arg0, s32 arg1) {
    s32 var_r0;

    func_0203310c();
    var_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r0 == 0) {
        var_r0 = arg1;
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
}
