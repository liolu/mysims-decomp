#include "m2c.h"

M2C_UNK func_020448d8(void *, s32, M2C_UNK, M2C_UNK); /* extern */

void func_02047bfc(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r6;
    void **temp_r0;

    var_r6 = arg1;
    if ((var_r6 != 0) && (var_r6 != 4) && (var_r6 != 8)) {

    } else {
        temp_r0 = M2C_FIELD(arg0, void ***, 0x1294);
        if (temp_r0 != NULL) {
            var_r6 += M2C_FIELD(*temp_r0, s32(**)(), 0x10)(temp_r0);
        }
    }
    func_020448d8(arg0, var_r6, arg2, arg3);
}
