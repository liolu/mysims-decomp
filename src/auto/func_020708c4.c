#include "m2c.h"

M2C_UNK func_02034580(s32);                         /* extern */
M2C_UNK func_0206054c(s32);                         /* extern */

s32 func_020708c4(s32 arg0) {
    func_02034580(arg0 + 0x24);
    func_0206054c(arg0 + 0x18);
    return arg0;
}
