#include "m2c.h"

M2C_UNK func_0204498c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02047bfc(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0204ecbc(void *, M2C_UNK, M2C_UNK);        /* extern */

void func_0204ee00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xDA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDB0) = 0;
    func_02047bfc(arg0, 0, 0, 0x5000);
    func_0204498c(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x1DE4) = func_0204ecbc(arg0, 2, 2);
    M2C_FIELD(arg0, s32 *, 0x1DF0) = 3;
}
