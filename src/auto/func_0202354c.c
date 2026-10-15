#include "m2c.h"

M2C_UNK func_02023588(s32);                         /* extern */
s32 func_020235a8(M2C_UNK, s32);                    /* extern */

s32 func_0202354c(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_020235a8(arg0, 0x50434D50);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_02023588(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
