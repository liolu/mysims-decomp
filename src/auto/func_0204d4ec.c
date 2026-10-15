#include "m2c.h"

M2C_UNK func_0204efd0(void *, s32, s32);            /* extern */

void func_0204d4ec(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_0204efd0(arg0, M2C_FIELD(arg0, s32 *, 0x1D94), M2C_FIELD(arg0, s32 *, 0x1D98));
    M2C_FIELD(arg0, s8 *, 0x1D64) = 1;
}
