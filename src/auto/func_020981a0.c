#include "m2c.h"

M2C_UNK func_02043094();                            /* extern */

void func_020981a0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_02043094();
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_02043094();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
