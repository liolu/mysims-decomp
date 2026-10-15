#include "m2c.h"

M2C_UNK func_02038b90(void *);                      /* extern */
M2C_UNK func_02038bcc();                            /* extern */

void func_02038b3c(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r2 != 0) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r2 != temp_r1) {
            if (temp_r1 != 0) {
                M2C_FIELD(arg0, s32 *, 0x10) = temp_r1;
                if (M2C_FIELD(arg0, u8 *, 0x14) == 0) {
                    return;
                }
                func_02038bcc(arg0);
                func_02038b90(arg0);
                return;
            }
            func_02038bcc(arg0);
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
    }
}
