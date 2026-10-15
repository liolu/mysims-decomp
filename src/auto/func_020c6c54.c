#include "m2c.h"

M2C_UNK func_02034580(s32);                         /* extern */
M2C_UNK func_0205b48c(s32);                         /* extern */
M2C_UNK func_0206054c(s32);                         /* extern */
M2C_UNK func_020c6b98();                            /* extern */

s32 func_020c6c54(s32 arg0) {
    func_020c6b98();
    func_02034580(arg0 + 0xC8);
    func_0206054c(arg0 + 0xAC);
    func_0206054c(arg0 + 0xA0);
    func_0205b48c(arg0);
    return arg0;
}
