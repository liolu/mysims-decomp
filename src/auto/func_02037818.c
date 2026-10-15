#include "m2c.h"

M2C_UNK func_02033980(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020353bc(s32);                             /* extern */
M2C_UNK func_02035450(s32, s32);                    /* extern */

void func_02037818(s32 arg0) {
    if (func_020353bc(arg0 + 0x28) != 0) {
        return;
    }
    if (func_020353bc(arg0 + 0x44) != 0) {
        return;
    }
    func_02033980(arg0 + 0x28, 1, 8);
    func_02035450(arg0 + 0xC, arg0 + 0x28);
    func_02033980(arg0 + 0x44, 1, 8);
    func_02035450(arg0 + 0xC, arg0 + 0x44);
}
