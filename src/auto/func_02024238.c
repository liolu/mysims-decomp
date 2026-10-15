#include "m2c.h"

M2C_UNK func_020090f0(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02024238(void *arg0) {
    func_020090f0(0, arg0 + 4, 0x18);
    M2C_FIELD(arg0, s32 *, 4) = 0x1000;
    M2C_FIELD(arg0, s32 *, 8) = 0x1000;
}
