#include "m2c.h"

M2C_UNK func_0203901c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02055e48(void *, s32, M2C_UNK, M2C_UNK); /* extern */

void func_020bca64(void *arg0) {
    s32 temp_r1;
    void *temp_r3;

    if (M2C_FIELD(arg0, u8 *, 0x2BC) != 1) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    temp_r1 = M2C_FIELD(arg0, s8 *, 0x2A9) + M2C_FIELD(arg0, u8 *, 0x2BF);
    if (temp_r1 == M2C_FIELD(temp_r3, s32 *, 0xA94)) {
        return;
    }
    func_02055e48(temp_r3 + 0x8EC, temp_r1, 1, 0x5000);
    func_0203901c(M2C_FIELD(arg0, void **, 0x10) + 0xA30, 1);
    M2C_FIELD(arg0, u8 *, 0x2BC)                            = 0U;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xA98) = 0x1000;
}
