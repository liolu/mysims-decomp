#include "m2c.h"

M2C_UNK func_02038bcc();                            /* extern */
M2C_UNK func_02060604(void *);                      /* extern */

void func_02038ac0(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    if ((temp_r2 != 0) && (temp_r2 == M2C_FIELD(arg0, s32 *, 8))) {
        func_02038bcc(arg0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    func_02060604(arg0 + 4);
}
