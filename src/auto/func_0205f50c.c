#include "m2c.h"

M2C_UNK func_0205f69c(void *);                      /* extern */

void func_0205f50c(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x19C) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1A4);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) (temp_r0 - 1);
        return;
    }
    temp_r1                       = M2C_FIELD(arg0, s32 *, 0x1A0) + 2;
    M2C_FIELD(arg0, s32 *, 0x1A0) = temp_r1;
    if (temp_r1 >= (s32) (M2C_FIELD(arg0, s32 *, 0x1A8) + 0x50)) {
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    }
    func_0205f69c(arg0);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) | 0x10000);
}
