#include "m2c.h"

M2C_UNK func_02043094(s32);                         /* extern */

void func_02055bf0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1FC) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x17C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x148) = (s32) (M2C_FIELD(arg0, s32 *, 0x148) & ~1);
    }
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    func_02043094(M2C_FIELD(arg0, s32 *, 0x1FC));
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
}
