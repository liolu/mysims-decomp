#include "m2c.h"

M2C_UNK func_02043094(s32);                         /* extern */

void func_0204ce58(void *arg0) {
    func_02043094(M2C_FIELD(arg0, s32 *, 0x16AC));
    M2C_FIELD(arg0, s32 *, 0x16AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x129C) = (s32) ((M2C_FIELD(arg0, s32 *, 0x129C) | 0x10) & ~8);
}
