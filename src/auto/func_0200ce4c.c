#include "m2c.h"

M2C_UNK func_02006fe4(s32, s32);                    /* extern */
M2C_UNK func_02007058(s32, s32);                    /* extern */
M2C_UNK func_02009274(s32, M2C_UNK, s32);           /* extern */

void func_0200ce4c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    func_02007058(temp_r4, temp_r6);
    func_02006fe4(temp_r4, temp_r6);
    func_02009274(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
