#include "m2c.h"

M2C_UNK func_02033df4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020340e4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203427c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020366e0(s32);                         /* extern */

void func_02037f54(s32 arg0) {
    func_020366e0(arg0 + 0x40C);
    func_020340e4(arg0 + 0xE8, 1);
    func_0203427c(arg0 + 0x110, 1, 1);
    func_020340e4(arg0 + 0x138, 0);
    func_0203427c(arg0 + 0x160, 0, 1);
    func_02033df4(arg0 + 0x188, 1);
    func_0203427c(arg0 + 0x26C, 1, 0);
    func_02033df4(arg0 + 0x294, 0);
    func_0203427c(arg0 + 0x378, 0, 0);
}
