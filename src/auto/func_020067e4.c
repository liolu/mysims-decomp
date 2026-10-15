#include "m2c.h"

M2C_UNK func_02006220();                            /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */

void func_020067e4(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_0200856c();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02006220();
    func_02008580(temp_r4);
}
