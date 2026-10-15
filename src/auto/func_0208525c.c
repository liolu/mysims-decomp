#include "m2c.h"

M2C_UNK func_020448d8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0204498c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02084e80(void *);                      /* extern */

void func_0208525c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xDA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDB0) = 0;
    func_020448d8(arg0, 0, 0, 0x5000);
    func_0204498c(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0xDE8) = 5;
    func_02084e80(arg0);
    M2C_FIELD(arg0, s32 *, 0xDE0) = 1;
}
