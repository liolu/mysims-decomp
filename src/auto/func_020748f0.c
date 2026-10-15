#include "m2c.h"

s32 func_020748b4(M2C_UNK);                         /* extern */
extern M2C_UNK data_020d1e4c;
extern void *data_02118994;
extern void *data_02118998;

s32 func_020748f0(void) {
    s32 var_r4;
    u16 temp_r0;
    u16 temp_r3;
    void *temp_r0_2;

    var_r4  = 0;
    temp_r3 = M2C_FIELD(data_02118994, u16 *, 0x9A2);
    if ((u32) temp_r3 >= 5U) {
        return 1;
    }
    if (((s32) M2C_FIELD(data_02118994, u16 *, 0x9A4) >= (s32) * ((M2C_UNK *) ((s8 *) &data_020d1e4c + (temp_r3 * 4)))) &&
        (func_020748b4(0) != 0)) {
        M2C_FIELD(data_02118994, u16 *, 0x9A2) = (u16) (M2C_FIELD(data_02118994, u16 *, 0x9A2) + 1);
        if ((u32) M2C_FIELD(data_02118994, u16 *, 0x9A2) > 1U) {
            temp_r0 = M2C_FIELD(data_02118994, u16 *, 0x13A);
            switch (temp_r0) {
                default:
                    break;
                case 0:
                    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x80);
                    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x200);
                    break;
                case 1:
                    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x200);
                    break;
                case 2:
                    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x100);
                    break;
                case 3:
                    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x80);
                    break;
            }
            M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x40);
            M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x2000);
            M2C_FIELD(data_02118998, s32 *, 0x3844) = 0xF0;
        } else {
            M2C_FIELD(data_02118998, s32 *, 0x3844) = 0;
        }
        M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 8);
        var_r4                                  = 1;
        temp_r0_2                               = data_02118998 + 0x380C;
        M2C_FIELD(temp_r0_2, s32 *, 0x4AC)      = 2;
        M2C_FIELD(temp_r0_2, s32 *, 0x4B0)      = 2;
        M2C_FIELD(temp_r0_2, s32 *, 0x4B4)      = 0;
        M2C_FIELD(data_02118998, s32 *, 0x3CB0) = 8;
        M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x8000);
    }
    return var_r4;
}
