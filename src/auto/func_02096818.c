#include "m2c.h"

s32 func_0206f8c0(s32);                             /* extern */
s32 func_02095720(void *);                          /* extern */
extern s32 data_02118998;

void func_02096818(void *arg0) {
    s32 temp_r0;
    void *temp_r1;

    temp_r1 = data_02118998 + 0x812C;
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 0x150);
    if ((temp_r0 != 2) && (temp_r0 != 0x12)) {

    } else {
        M2C_FIELD(temp_r1, s8 *, 0x391) = 1;
        M2C_FIELD(temp_r1, s8 *, 0x1AE) = 1;
    }
    if (func_0206f8c0(data_02118998 + 0x812C) != 0) {
        return;
    }
    if (func_02095720(arg0) == 0) {
        M2C_FIELD(arg0, s32 *, 0xA0) = 6;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 0x10);
    M2C_FIELD(arg0, s32 *, 0xA0) = 0xA;
}
