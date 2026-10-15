#include "m2c.h"

M2C_UNK func_02053dfc(s32);                         /* extern */
M2C_UNK func_0205558c(void *);                      /* extern */
M2C_UNK func_02058dd4(void *, M2C_UNK);             /* extern */

void func_0205296c(void *arg0) {
    func_02053dfc(arg0 + 0x4A0);
    M2C_FIELD(arg0, s32 *, 0xFB4) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x11C) != 0) {
        func_0205558c(arg0 + 0x18);
    }
    func_02058dd4(arg0 + 0xFB8, 0);
}
