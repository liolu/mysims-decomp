#include "m2c.h"

M2C_UNK func_0208a508();                            /* extern */

void func_0208a8c8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, s32 *, 0x94) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    func_0208a508();
}
