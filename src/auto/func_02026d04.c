#include "m2c.h"

void *func_02025a00(s32);                           /* extern */
M2C_UNK func_0202626c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020268dc(void *, M2C_UNK);             /* extern */
extern void *data_021116b4;

void func_02026d04(M2C_UNK arg0, s32 arg1) {
    M2C_UNK (*temp_r2)(void *, M2C_UNK);
    M2C_UNK (*temp_r3)(void *, M2C_UNK);
    u32 temp_r0_2;
    u32 temp_r4;
    void *temp_r0;
    void *temp_r5;

    temp_r5 = M2C_FIELD(data_021116b4, void **, 0);
    if (M2C_FIELD(temp_r5, s32 *, 0x10) == 0) {
        return;
    }
    M2C_FIELD(data_021116b4, s32 *, 0x30) = 1;
    temp_r3                               = M2C_FIELD(temp_r5, M2C_UNK(**)(void *, M2C_UNK), 0x18);
    if (temp_r3 != NULL) {
        temp_r3(data_021116b4, arg0);
    }
    if (M2C_FIELD(data_021116b4, s32 *, 0x30) != 0) {
        if (arg1 != -1) {
            temp_r4                         = M2C_FIELD(temp_r5, u32 *, 0x14);
            temp_r0                         = func_02025a00(arg1);
            M2C_FIELD(temp_r0, s32 *, 0x20) = (s32) ((M2C_FIELD(temp_r0, s32 *, 0x20) & ~(1 << temp_r4)) | (1 << temp_r4));
        }
        temp_r0_2 = M2C_FIELD(temp_r5, u32 *, 0x14);
        switch (temp_r0_2) {
            case 3:
                break;
            default:
                break;
            case 0:
                func_020268dc(temp_r5, arg0);
                break;
            case 1:
            case 2:
                func_0202626c(temp_r5, arg0);
                break;
        }
    }
    temp_r2 = M2C_FIELD(temp_r5, M2C_UNK(**)(void *, M2C_UNK), 0x1C);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2(data_021116b4, arg0);
}
