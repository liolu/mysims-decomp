#include "m2c.h"

M2C_UNK func_02026ecc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02038f48();                            /* extern */

void func_02038f18(void *arg0, M2C_UNK arg1) {
    func_02038f48();
    func_02026ecc(arg0 + 4, arg1);
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s8 *, 0x5C)  = 1;
}
