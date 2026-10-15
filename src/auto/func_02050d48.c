#include "m2c.h"

extern s32 data_02118998;

s32 func_02050d48(void *arg0) {
    s32 var_r2;
    void *temp_r1;

    var_r2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xE6C) == 0) {
        var_r2                        = 1;
        M2C_FIELD(arg0, s32 *, 0xE6C) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x8E4) == 0x71) {
        temp_r1 = data_02118998 + 0x273C;
        if (M2C_FIELD(temp_r1, u8 *, 0x6B) == 0) {
            M2C_FIELD(temp_r1, u8 *, 0x6B) = 1U;
        }
    }
    return var_r2;
}
