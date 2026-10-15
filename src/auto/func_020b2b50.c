#include "m2c.h"

M2C_UNK func_02061ce0(void *, M2C_UNK);             /* extern */
M2C_UNK func_020b158c(void *);                      /* extern */

void func_020b2b50(void *arg0) {
    M2C_FIELD(arg0, s16 *, 8) = 2;
    func_02061ce0(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x2FCC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2FD0) = 0;
    M2C_FIELD(arg0, s8 *, 0xFA0)   = 1;
    func_020b158c(arg0);
    M2C_FIELD(arg0, s32 *, 0x5500) = (s32) (M2C_FIELD(arg0, s32 *, 0x5500) & ~2);
}
