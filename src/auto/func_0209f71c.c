#include "m2c.h"

M2C_UNK func_02086cac(s32, M2C_UNK);                /* extern */

void func_0209f71c(s32 arg0, s32 arg1) {
    if (arg1 >= 0) {
        func_02086cac((arg1 * 0xD8) + (arg0 + 0x43C4), 1);
        return;
    }
    if (arg1 != -2) {
        return;
    }
    func_02086cac(arg0 + 0x425C, 1);
}
