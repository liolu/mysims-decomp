#include "m2c.h"

M2C_UNK func_02023acc(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02023ad8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020258d0(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02063f6c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s8 arg3) {
    if (func_02023ad8(arg2, 1) != 0) {
        func_02023acc(arg2, 1);
        M2C_FIELD(arg0, s8 *, 0x98) = arg3;
    }
    if (func_02023ad8(arg2, 2) != 0) {
        func_02023acc(arg2, 2);
        M2C_FIELD(arg0, s8 *, 0x99) = arg3;
    }
    func_020258d0(arg0, arg1, arg2);
}
