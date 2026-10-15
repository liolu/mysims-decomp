#include "m2c.h"

M2C_UNK func_02022288(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02036ac0;

void func_02036ad4(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 == 0) {
        return;
    }
    func_02022288(temp_r0, 0x18, 8, &func_02036ac0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}
