#include "m2c.h"

M2C_UNK func_02009108(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02009308(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_020c804c(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x820;
    func_02009308(arg2, M2C_FIELD(arg0, s32 *, 0x88) + temp_r4, 0x800);
    func_02009108(arg3, M2C_FIELD(arg0, s32 *, 0x88) + temp_r4 + 0x800, 0x20);
}
