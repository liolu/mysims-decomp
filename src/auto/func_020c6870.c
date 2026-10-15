#include "m2c.h"

M2C_UNK func_02055354(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02055e28(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020c68bc(s32);                             /* extern */

void func_020c6870(void *arg0) {
    func_02055354(arg0 + 0x8EC, func_020c68bc(M2C_FIELD(arg0, s32 *, 0xDCC)), 0);
    if (M2C_FIELD(arg0, u8 *, 0x9F0) == 0) {
        return;
    }
    func_02055e28(arg0 + 0x8EC, 0, 0, 0);
}
