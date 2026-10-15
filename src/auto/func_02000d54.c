#include "m2c.h"

M2C_UNK func_02034bc4(s32);                         /* extern */
M2C_UNK func_0203539c(s32);                         /* extern */

s32 func_02000d54(s32 arg0) {
    func_0203539c(arg0 + 0x44);
    func_0203539c(arg0 + 0x28);
    func_0203539c(arg0 + 0xC);
    func_02034bc4(arg0);
    return arg0;
}
