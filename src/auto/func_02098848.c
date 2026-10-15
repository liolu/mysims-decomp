#include "m2c.h"

M2C_UNK func_020091b4(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02098848(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 == 0) {
        return;
    }
    func_020091b4(temp_r0, arg1, 0x200);
}
