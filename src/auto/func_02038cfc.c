#include "m2c.h"

s32 func_02026dec(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02026e3c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02038d60();                            /* extern */
s32 func_02060594(s32, s32, M2C_UNK);               /* extern */

s32 func_02038cfc(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02038d60();
    if (func_02060594(arg0 + 4, func_02026dec(arg1, arg2), 0) == 0) {
        return 0;
    }
    func_02026e3c(M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x18) = 3;
    return 1;
}
