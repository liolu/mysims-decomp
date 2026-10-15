#include "m2c.h"

M2C_UNK func_0205acd0(s32, M2C_UNK);                /* extern */

void func_020c12e0(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    func_0205acd0(0x1F9, 0);
    M2C_FIELD(arg0, s32 *, 0x88) = 1;
}
