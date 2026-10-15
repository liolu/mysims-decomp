#include "m2c.h"

s32 func_02038e34(s32);                             /* extern */

s32 func_02056018(void *arg0) {
    s32 temp_ip;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r3;
    s32 var_r1;
    void *temp_r0;

    temp_ip = M2C_FIELD(arg0, s32 *, 0x1A4);
    var_r1  = 0;
    if ((temp_ip >= 0) && (temp_r3 = M2C_FIELD(arg0, s32 *, 0x1A8), (temp_r3 >= 0))) {
        temp_r0 = arg0 + (temp_ip * 4);
        if (M2C_FIELD(arg0, u8 *, 0x1C0) != 0) {
            temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x134);
            if (temp_r2 != 0) {
                temp_r2_2 = (temp_r3 * 0x3C) + temp_r2;
                if ((M2C_FIELD(temp_r2_2, u8 *, 0x38) == 0) && (M2C_FIELD(temp_r2_2, u8 *, 0x39) == 0)) {

                } else {
                    var_r1 = func_02038e34(temp_r2_2 + 0x1C);
                }
            }
        } else {
            temp_r2_3 = M2C_FIELD(temp_r0, s32 *, 0x120);
            if (temp_r2_3 != 0) {
                temp_r2_4 = (temp_r3 * 0x3C) + temp_r2_3;
                if ((M2C_FIELD(temp_r2_4, u8 *, 0x38) == 0) && (M2C_FIELD(temp_r2_4, u8 *, 0x39) == 0)) {

                } else {
                    var_r1 = func_02038e34(temp_r2_4 + 0x1C);
                }
            }
        }
    }
    return var_r1;
}
