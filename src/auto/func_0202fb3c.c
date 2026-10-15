#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
s32 func_02009ec8(s32, M2C_UNK, s32, M2C_UNK);      /* extern */
M2C_UNK func_0202fa40(void *, M2C_UNK);             /* extern */

s32 func_0202fb3c(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = func_0200856c();
            func_0202fa40(arg0, 1);
            func_02008580(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    return func_02009ec8(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
