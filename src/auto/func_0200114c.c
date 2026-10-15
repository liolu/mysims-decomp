#include "m2c.h"

M2C_UNK func_02022f1c(s32, s32);                    /* extern */
extern M2C_UNK data_02106a40;

void func_0200114c(void *arg0) {
    s32 temp_r1;
    void *temp_r2;
    void *temp_r4;
    void *temp_r5;

    if (arg0 == NULL) {
        return;
    }
    temp_r4                         = M2C_FIELD(arg0, void **, -0xC);
    temp_r2                         = arg0 - 0xC;
    M2C_FIELD(temp_r4, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x10) | 0x40000000);
    temp_r1                         = M2C_FIELD(temp_r4, s32 *, 4);
    if (temp_r1 < 9) {
        temp_r5                      = (M2C_UNK *) ((s8 *) &data_02106a40 + (temp_r1 * 8));
        M2C_FIELD(temp_r5, s32 *, 4) = (s32) (M2C_FIELD(temp_r5, s32 *, 4) | 0x40000000);
        func_02022f1c(M2C_FIELD(temp_r4, s32 *, 0), M2C_FIELD(temp_r2, s32 *, 4));
        M2C_FIELD(temp_r5, s32 *, 4) = (s32) (M2C_FIELD(temp_r5, s32 *, 4) & ~0x40000000);
    } else {
        func_02022f1c(M2C_FIELD(temp_r4, s32 *, 0), M2C_FIELD(temp_r2, s32 *, 4));
    }
    M2C_FIELD(temp_r4, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x10) & ~0x40000000);
}
