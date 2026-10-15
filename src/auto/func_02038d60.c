#include "m2c.h"

M2C_UNK func_02038f94(s32, void *);                 /* extern */
M2C_UNK func_02060604(void *);                      /* extern */

void func_02038d60(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r0 != 0) {
        func_02038f94(temp_r0, arg0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    func_02060604(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
