#include "m2c.h"

M2C_UNK func_020448d8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0204498c(void *, M2C_UNK);             /* extern */
s32 func_020851a0(void *, M2C_UNK, M2C_UNK);        /* extern */

void func_020852a4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xDA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDB0) = 0;
    func_020448d8(arg0, 0, 0, 0x5000);
    func_0204498c(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0xDE8) = func_020851a0(arg0, 2, 2);
    M2C_FIELD(arg0, s32 *, 0xDE0) = 3;
}
