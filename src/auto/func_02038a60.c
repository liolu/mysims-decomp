#include "m2c.h"

M2C_UNK func_02007000(s32 *, s32);                  /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
s32 func_02060b38(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02038a60(void *arg0, M2C_UNK arg1) {
    s32 *temp_r0;
    s32 var_r4;

    var_r4 = 0;
    if (func_02060b38(arg0 + 4, arg1, 0) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 **, 8);
        if (*temp_r0 == 0x30444D42) {
            func_02007000(temp_r0, M2C_FIELD(arg0, s32 *, 0xC));
            var_r4                        = 1;
            M2C_FIELD(arg0, s32 **, 0x10) = (s32 *) M2C_FIELD(arg0, s32 **, 8);
        } else {
            func_02060604(arg0 + 4);
        }
    }
    return var_r4;
}
