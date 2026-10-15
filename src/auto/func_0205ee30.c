#include "m2c.h"

M2C_UNK func_0205eb7c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0205ecec();                            /* extern */
M2C_UNK func_020600a0(void *);                      /* extern */

void func_0205ee30(void *arg0) {
    func_0205ecec();
    func_020600a0(arg0);
    M2C_FIELD(arg0, s16 *, 0x5E)  = 1;
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) & ~0x300);
    func_0205eb7c(arg0, -1);
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x18C) = -1;
}
