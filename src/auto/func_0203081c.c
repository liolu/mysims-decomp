#include "m2c.h"

M2C_UNK func_020226f8(void *, s32);                 /* extern */
s32 func_020230d8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020307d8();                            /* extern */

s32 func_0203081c(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020230d8(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020307d8();
    func_020226f8(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
