#include "m2c.h"

M2C_UNK func_02009168(M2C_UNK, s32, s32);           /* extern */

void func_020c6a04(void *arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC4) + (arg1 << 6);
    func_02009168(0, M2C_FIELD(temp_r2, s32 *, 0x10), M2C_FIELD(temp_r2, s32 *, 0x14));
}
