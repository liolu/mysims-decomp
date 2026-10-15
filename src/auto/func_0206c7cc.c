#include "m2c.h"

M2C_UNK func_02034580(s32);                         /* extern */
M2C_UNK func_0204306c(s32);                         /* extern */
M2C_UNK func_0206054c(s32);                         /* extern */

s32 func_0206c7cc(s32 arg0) {
    func_02034580(arg0 + 0x24);
    func_0206054c(arg0 + 0x18);
    func_0204306c(arg0);
    return arg0;
}
