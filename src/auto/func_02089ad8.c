#include "m2c.h"

M2C_UNK func_0203901c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02047bfc(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02089ad8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4320) != 1) {
        return;
    }
    func_02047bfc(M2C_FIELD(arg0, s32 *, 0x4318), 9, 0, 0);
    func_0203901c(M2C_FIELD(arg0, s32 *, 0x4318) + 0xA30, 1);
}
