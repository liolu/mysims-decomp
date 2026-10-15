#include "m2c.h"

M2C_UNK func_020091b4(void *, void *, M2C_UNK);     /* extern */

void func_020522a4(void *arg0, void *arg1, s32 arg2) {
    u32 temp_r0;

    if (arg1 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x24C);
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_020091b4(arg0 + 4, arg0 + 0x94, 0x90);
            func_020091b4(arg0 + 4, arg0 + 0x1B4, 0x90);
            break;
        case 1:
        case 2:
        case 3:
            func_020091b4(arg0 + 0x1B4, arg0 + 0x94, 0x90);
            break;
    }
    func_020091b4(arg1, arg0 + 0x124, 0x90);
    M2C_FIELD(arg0, u32 *, 0x24C) = 1U;
    M2C_FIELD(arg0, s32 *, 0x244) = arg2;
    M2C_FIELD(arg0, s32 *, 0x248) = 0;
}
