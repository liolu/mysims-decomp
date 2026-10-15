#include "m2c.h"

M2C_UNK func_02002360();         /* extern */
M2C_UNK func_02002394();         /* extern */

void func_0204f98c(s32 arg0, u32 arg1, void *arg2) {
    switch (arg1) {
        default:
            break;
        case 0:
            func_02002394(arg0 + 0x10, arg0 + 0x20);
            func_02002394(arg2, arg0 + 0x2C, arg2);
            break;
        case 1:
            func_02002394(arg0 + 0x10, arg0 + 0x20);
            func_02002360(arg2, arg0 + 0x2C, arg2);
            break;
        case 2:
            func_02002360(arg0 + 0x10, arg0 + 0x20);
            func_02002360(arg2, arg0 + 0x2C, arg2);
            break;
        case 3:
            func_02002360(arg0 + 0x10, arg0 + 0x20);
            func_02002394(arg2, arg0 + 0x2C, arg2);
            break;
    }
    M2C_FIELD(arg2, s32 *, 4) = 0;
}
