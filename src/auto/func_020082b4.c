#include "m2c.h"

M2C_UNK func_0200819c();                      /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580();                         /* extern */

void func_020082b4(void *arg0) {
    s32 temp_r0;

    temp_r0                      = func_0200856c();
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        func_02008580();
        return;
    }
    func_0200819c(arg0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_02008580(temp_r0);
}
