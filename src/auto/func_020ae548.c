#include "m2c.h"

M2C_UNK func_0203901c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02055158(void *);                      /* extern */
M2C_UNK func_02055e28(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02056018(void *);                          /* extern */
s32 func_020560b8(void *);                          /* extern */
M2C_UNK func_020ae728();                            /* extern */

void func_020ae548(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;
    u32 temp_r0_2;
    u32 temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x210) == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u32 *, 0x20C);
    switch (temp_r1) {
        default:
            break;
        case 0:
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x208);
            if (temp_r0 == 0) {
                func_02055e28(arg0 + 4, 0, 1, 0);
                func_0203901c(arg0 + 0x148, 0);
                M2C_FIELD(arg0, u32 *, 0x20C) = 3U;
            } else if ((temp_r0 > 0) && (temp_r0 < 3)) {
                func_02055e28(arg0 + 4, 1, 1, 0);
                func_0203901c(arg0 + 0x148, 0);
                M2C_FIELD(arg0, u32 *, 0x20C) = (u32) (M2C_FIELD(arg0, u32 *, 0x20C) + 1);
            }
            break;
        case 1:
            temp_r5 = func_02056018(arg0 + 4);
            if (temp_r5 >= (s32) (func_020560b8(arg0 + 4) - 0x1000)) {
                temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x20C);
                if (temp_r0_2 == 1) {
                    M2C_FIELD(arg0, u32 *, 0x20C) = (u32) (temp_r0_2 + 1);
                } else if (temp_r0_2 == 2) {
                    func_02055e28(arg0 + 4, 2, 1, 0);
                    func_0203901c(arg0 + 0x148, 1);
                    M2C_FIELD(arg0, u32 *, 0x20C) = (u32) (M2C_FIELD(arg0, u32 *, 0x20C) + 1);
                }
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, u8 *, 0x211) != 0) {
                func_02055e28(arg0 + 4, 3, 1, 0);
                func_0203901c(arg0 + 0x148, 0);
                M2C_FIELD(arg0, u32 *, 0x20C) = (u32) (M2C_FIELD(arg0, u32 *, 0x20C) + 1);
            }
            break;
        case 3:
            temp_r5_2 = func_02056018(arg0 + 4);
            if (temp_r5_2 >= (s32) (func_020560b8(arg0 + 4) - 0x1000)) {
                M2C_FIELD(arg0, u32 *, 0x20C) = (u32) (M2C_FIELD(arg0, u32 *, 0x20C) + 1);
            }
            break;
        case 4:
            func_020ae728(arg0);
            break;
    }
    func_02055158(arg0 + 4);
}
