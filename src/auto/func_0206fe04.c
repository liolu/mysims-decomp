#include "m2c.h"

s32 func_0206fe04(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x17C);
    var_r3  = -1;
    if (temp_r2 >= 0) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x150);
        switch (temp_r1) {                          /* irregular */
            case 2:
                if (temp_r2 >= 0) {
                    if (temp_r2 < 0x12) {
                        var_r3 = (s32) M2C_FIELD((arg0 + temp_r2), u8 *, 0x168);
                    }
                }
                break;
            case 18:
                if (temp_r2 >= 0) {
                    if (temp_r2 < 0xC) {
                        var_r3 = (s32) M2C_FIELD((arg0 + temp_r2), u8 *, 0x168);
                    }
                }
                break;
            default:
                var_r3 = temp_r2;
                break;
        }
    }
    return var_r3;
}
