#include "m2c.h"

s32 func_0206f8c0(s32);                             /* extern */
s32 func_02095720(void *);                          /* extern */
M2C_UNK func_02095b5c(void *);                      /* extern */
extern s32 data_02118998;

void func_02096898(void *arg0) {
    s32 temp_r0;
    void *temp_r0_2;
    void *temp_r3;

    temp_r3 = data_02118998 + 0x812C;
    temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x150);
    if (temp_r0 == 0x11) {
        M2C_FIELD(temp_r3, s32 *, 0x388)  = 0;
        temp_r0_2                         = data_02118998 + 0x812C;
        M2C_FIELD(temp_r0_2, s8 *, 0x391) = 0;
        M2C_FIELD(temp_r0_2, s8 *, 0x1AE) = 1;
    } else if (temp_r0 == 1) {
        M2C_FIELD(temp_r3, s8 *, 0x391) = 0;
        M2C_FIELD(temp_r3, s8 *, 0x1AE) = 1;
    }
    if (func_0206f8c0(data_02118998 + 0x812C) != 0) {
        return;
    }
    func_02095b5c(arg0);
    if (func_02095720(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 0x10);
    }
    M2C_FIELD(arg0, s32 *, 0xA0) = 0xD;
}
