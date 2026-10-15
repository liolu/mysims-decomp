#include "m2c.h"

s32 func_02002488();                                /* extern */
M2C_UNK func_020024e8(void *, M2C_UNK *);           /* extern */

s32 func_0204f294(void *arg0) {
    u8 sp0[12];
    s32 temp_r2;
    s32 var_r4;

    var_r4 = 0;
    if (func_02002488() != 0) {
        func_020024e8(arg0, sp0);
        temp_r2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r2 < 0xED6) {
            if (temp_r2 >= 0x5FE) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
                    var_r4 = 1;
                } else {
                    var_r4 = 7;
                }
            } else if (temp_r2 >= -0x5FE) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
                    var_r4 = 2;
                } else {
                    var_r4 = 6;
                }
            } else if (temp_r2 >= -0xED6) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
                    var_r4 = 3;
                } else {
                    var_r4 = 5;
                }
            } else {
                var_r4 = 4;
            }
        }
    }
    return var_r4;
}
