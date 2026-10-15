#include "m2c.h"

M2C_UNK func_020634d8(void *);                      /* extern */
M2C_UNK func_02064f84(void *);                      /* extern */
M2C_UNK func_020651a0(void *);                      /* extern */
M2C_UNK func_02065410(void *);                      /* extern */
M2C_UNK func_02065a10(void *);                      /* extern */
M2C_UNK func_02065ee0(void *);                      /* extern */
M2C_UNK func_020660f4(void *);                      /* extern */
M2C_UNK func_020663f8(void *);                      /* extern */
M2C_UNK func_02066b98(void *);                      /* extern */
M2C_UNK func_020674e0(void *);                      /* extern */
M2C_UNK func_02067d38(void *);                      /* extern */
M2C_UNK func_02068034(void *);                      /* extern */
M2C_UNK func_02068278(void *);                      /* extern */

void func_02068e90(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 temp_r1_5;
    u32 temp_r0_2;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r1_3;

    if (M2C_FIELD(arg0, u8 *, 0x184) == 0) {
        if (M2C_FIELD(arg0, u32 *, 0x158) != M2C_FIELD(arg0, u32 *, 0x150)) {
            if (M2C_FIELD(arg0, u8 *, 0x15C) != 0) {
                temp_r0                       = M2C_FIELD(arg0, s32 *, 0x194) + 8;
                M2C_FIELD(arg0, s32 *, 0x194) = temp_r0;
                if (temp_r0 > 0x40) {
                    M2C_FIELD(arg0, s32 *, 0x194) = 0x40;
                }
                temp_r1                       = M2C_FIELD(arg0, s32 *, 0x198) - 8;
                M2C_FIELD(arg0, s32 *, 0x198) = temp_r1;
                if (temp_r1 < -0x40) {
                    M2C_FIELD(arg0, s32 *, 0x198) = -0x40;
                }
            }
            if (M2C_FIELD(arg0, u32 *, 0x150) == 1) {
                temp_r1_2                     = M2C_FIELD(arg0, s32 *, 0x1B4) - 8;
                M2C_FIELD(arg0, s32 *, 0x1B4) = temp_r1_2;
                if (temp_r1_2 < -1) {
                    M2C_FIELD(arg0, s32 *, 0x1B4) = -1;
                    M2C_FIELD(arg0, s8 *, 0x1AE)  = 1;
                }
            }
            if ((((s32) M2C_FIELD(arg0, s32 *, 0x194) >= 0x40) && ((s32) M2C_FIELD(arg0, s32 *, 0x198) <= -0x40) &&
                 ((temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x150), (temp_r0_2 != 1)) ||
                  ((temp_r0_2 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B4) < 0)))) ||
                (M2C_FIELD(arg0, u8 *, 0x15C) == 0)) {
                M2C_FIELD(arg0, u32 *, 0x150) = (u32) M2C_FIELD(arg0, u32 *, 0x158);
                M2C_FIELD(arg0, s32 *, 0x194) = 0x40;
                M2C_FIELD(arg0, s32 *, 0x198) = -0x40;
                func_02064f84(arg0);
                M2C_FIELD(arg0, u8 *, 0x184)  = 0U;
                M2C_FIELD(arg0, s32 *, 0x18C) = 0;
                M2C_FIELD(arg0, s32 *, 0x17C) = -1;
                M2C_FIELD(arg0, s32 *, 0x180) = -1;
                M2C_FIELD(arg0, s8 *, 0x1AE)  = 1;
            }
        } else {
            temp_r0_3                     = M2C_FIELD(arg0, s32 *, 0x194) - 8;
            M2C_FIELD(arg0, s32 *, 0x194) = temp_r0_3;
            if (temp_r0_3 < 0) {
                M2C_FIELD(arg0, s32 *, 0x194) = 0;
            }
            temp_r0_4                     = M2C_FIELD(arg0, s32 *, 0x198) + 8;
            M2C_FIELD(arg0, s32 *, 0x198) = temp_r0_4;
            if (temp_r0_4 > 0) {
                M2C_FIELD(arg0, s32 *, 0x198) = 0;
            }
        }
    }
    temp_r1_3 = M2C_FIELD(arg0, u32 *, 0x150);
    if ((temp_r1_3 == 1) && (temp_r1_3 == M2C_FIELD(arg0, u32 *, 0x158))) {
        temp_r1_4 = M2C_FIELD(arg0, s32 *, 0x1B4);
        if (temp_r1_4 >= 0) {
            if (M2C_FIELD(arg0, u8 *, 0x1B0) != 0) {
                temp_r0_5                     = temp_r1_4 + 8;
                M2C_FIELD(arg0, s32 *, 0x1B4) = temp_r0_5;
                if (temp_r0_5 > 0x40) {
                    M2C_FIELD(arg0, s32 *, 0x1B4) = 0x40;
                }
            } else {
                temp_r1_5                     = temp_r1_4 - 8;
                M2C_FIELD(arg0, s32 *, 0x1B4) = temp_r1_5;
                if (temp_r1_5 < -1) {
                    M2C_FIELD(arg0, s32 *, 0x1B4) = -1;
                    M2C_FIELD(arg0, s8 *, 0x1AE)  = 1;
                }
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x13C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x13C0) + 1);
    if (M2C_FIELD(arg0, u8 *, 0x184) != 0) {
        temp_r0_6                     = M2C_FIELD(arg0, s32 *, 0x18C) + 1;
        M2C_FIELD(arg0, s32 *, 0x18C) = temp_r0_6;
        if (temp_r0_6 >= 0x18) {
            M2C_FIELD(arg0, u8 *, 0x184)  = 0U;
            M2C_FIELD(arg0, s32 *, 0x18C) = 0;
        }
        if (M2C_FIELD(arg0, u32 *, 0x150) == 1) {
            func_020651a0(arg0);
        }
    }
    if ((M2C_FIELD(arg0, u8 *, 0x184) != 0) && (M2C_FIELD(arg0, u32 *, 0x150) != 0xD)) {

    } else if ((M2C_FIELD(arg0, u8 *, 0x15D) != 0) || (M2C_FIELD(arg0, u32 *, 0x150) == 0xD)) {
        temp_r0_7 = M2C_FIELD(arg0, u32 *, 0x150);
        switch (temp_r0_7) {                        /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 1:                                     /* switch 1 */
                func_020651a0(arg0);
                break;
            case 2:                                     /* switch 1 */
                func_02065410(arg0);
                break;
            case 3:                                     /* switch 1 */
                func_02065a10(arg0);
                break;
            case 4:                                     /* switch 1 */
                func_02065ee0(arg0);
                break;
            case 5:                                     /* switch 1 */
            case 12:                                    /* switch 1 */
                func_020660f4(arg0);
                break;
            case 6:                                     /* switch 1 */
                func_020663f8(arg0);
                break;
            case 7:                                     /* switch 1 */
                M2C_FIELD(arg0, s8 *, 0x1AE) = 1;
                break;
            case 8:                                     /* switch 1 */
                M2C_FIELD(arg0, s8 *, 0x1AE) = 1;
                break;
            case 9:                                     /* switch 1 */
                func_02066b98(arg0);
                break;
            case 10:                                    /* switch 1 */
                M2C_FIELD(arg0, s8 *, 0x1AE) = 1;
                break;
            case 11:                                    /* switch 1 */
                M2C_FIELD(arg0, s8 *, 0x1AE) = 1;
                break;
            case 13:                                    /* switch 1 */
                func_020674e0(arg0);
                break;
            case 16:                                    /* switch 1 */
                func_02067d38(arg0);
                break;
            case 17:                                    /* switch 1 */
                func_02068034(arg0);
                break;
            case 18:                                    /* switch 1 */
                func_02068278(arg0);
                break;
        }
    }
    temp_r0_8 = M2C_FIELD(arg0, u32 *, 0x150);
    switch (temp_r0_8) {                            /* switch 2 */
        default:                                        /* switch 2 */
            break;
        case 7:                                         /* switch 2 */
        case 8:                                         /* switch 2 */
        case 10:                                        /* switch 2 */
        case 11:                                        /* switch 2 */
            M2C_FIELD(arg0, s8 *, 0x1AE) = 1;
            break;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C0) == 0) {
        return;
    }
    func_020634d8(arg0 + 0x2C4);
}
