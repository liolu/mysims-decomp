#include "m2c.h"

M2C_UNK func_0205ecec(s32);                         /* extern */
M2C_UNK func_0205fd40(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern void *data_02118994;
extern s32 data_02118998;

void func_020836e0(void *arg0) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r3;

    temp_r3 = data_02118998 + 0x27C0;
    if ((M2C_FIELD(temp_r3, u16 *, 0x10) == 7) && (M2C_FIELD(temp_r3, u16 *, 0x12) == 2)) {
        if (M2C_FIELD(arg0, u8 *, 0x4E4) == 0) {
            return;
        }
        temp_r2 = data_02118998 + 0x812C;
        temp_r0 = M2C_FIELD(temp_r2, s32 *, 0x150);
        if ((temp_r0 != 7) && (temp_r0 != 8)) {
            M2C_FIELD(temp_r2, s8 *, 0x38F) = 1;
            M2C_FIELD(temp_r2, s8 *, 0x1AE) = 1;
            func_0205fd40(data_02118998 + 0x9728, M2C_FIELD(data_02118994, s32 *, 0xCB4), 7, 0xA0, 8, 0, 2, 0);
            return;
        }
        M2C_FIELD(temp_r2, s8 *, 0x38F) = 0;
        M2C_FIELD(temp_r2, s8 *, 0x1AE) = 1;
        func_0205ecec(data_02118998 + 0x9728);
    }
}
