#include "m2c.h"

M2C_UNK func_020090f0(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02064258(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r1 == 0) {
        return;
    }
    func_020090f0(0, temp_r1, 0x800);
}
