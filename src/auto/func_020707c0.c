#include "m2c.h"

M2C_UNK func_0206353c(void *, M2C_UNK);             /* extern */

void func_020707c0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x244) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C8) + 1);
    }
    func_0206353c(arg0 + 0x248, 5);
    M2C_FIELD(arg0, u8 *, 0x244) = 1U;
}
