#include "m2c.h"

M2C_UNK func_0205b1b0(void *, s32, s32);            /* extern */

void func_0205b24c(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) == arg1) {
        return;
    }
    func_0205b1b0(arg0, arg1, M2C_FIELD(arg0, s32 *, 0xC));
}
