#include "m2c.h"

M2C_UNK func_02018478(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0208a618(void *arg0, M2C_UNK arg1) {
    func_02018478(arg0 + 4, arg1, 0x90);
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
}
