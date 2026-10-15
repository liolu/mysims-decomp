#include "m2c.h"

s32 func_02033314(void *arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r2, u8 *, 7) == 0) {
        var_r3 = 2 - M2C_FIELD(temp_r2, u8 *, 6);
    } else {
        var_r3 = 2;
    }
    return (arg1 * var_r3) + (s32) (temp_r2 + 0xC);
}
