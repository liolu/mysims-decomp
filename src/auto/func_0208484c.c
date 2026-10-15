#include "m2c.h"

M2C_UNK func_02055354(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02055e28(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0208489c(s32, u8);                         /* extern */

void func_0208484c(void *arg0) {
    func_02055354(arg0 + 0x8EC, func_0208489c(M2C_FIELD(arg0, s32 *, 0xDD0), M2C_FIELD(arg0, u8 *, 0xDD4)), 0);
    if (M2C_FIELD(arg0, u8 *, 0x9F0) == 0) {
        return;
    }
    func_02055e28(arg0 + 0x8EC, 0, 0, 0);
}
