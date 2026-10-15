#include "m2c.h"

M2C_UNK func_0202222c(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32)); /* extern */
M2C_UNK func_02038530(s32);                         /* extern */
M2C_UNK func_0203865c(s32);                         /* extern */
M2C_UNK func_0203888c(s32);                         /* extern */
M2C_UNK func_0206054c(s32);                         /* extern */
M2C_UNK func_02060604(s32);                         /* extern */
M2C_UNK func_0208a600(s32);                         /* extern */
M2C_UNK func_0208ac78();                            /* extern */

s32 func_0208add8(s32 arg0) {
    func_0208ac78();
    func_02060604(arg0 + 0x1C8);
    func_0203888c(arg0 + 0x1D4);
    func_0203865c(arg0 + 0x1D4);
    func_02038530(arg0 + 0x1D4);
    func_0206054c(arg0 + 0x1C8);
    func_0202222c(arg0 + 0x14C, 0xA, 0xC, func_0206054c);
    func_0208a600(arg0 + 4);
    return arg0;
}
