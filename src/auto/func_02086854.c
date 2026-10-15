#include "m2c.h"

M2C_UNK func_02055354(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02055e28(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0208659c(void *, s32, s32);                /* extern */

void func_02086854(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_0208659c(arg0, M2C_FIELD(arg0, s32 *, 0x8E4), M2C_FIELD(arg0, s32 *, 0x8E8));
    if (temp_r0 == 0) {
        return;
    }
    func_02055354(arg0 + 0x8EC, temp_r0 + 0x14, 0);
    if (M2C_FIELD(arg0, u8 *, 0x9F0) == 0) {
        return;
    }
    func_02055e28(arg0 + 0x8EC, 0, 0, 0);
}
