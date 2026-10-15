#include "m2c.h"

s32 func_0208c5d8(void *arg0) {
    s32 temp_r1;
    s32 var_r2;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return -1;
    }
    var_r2 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) >= 0x40) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0xB4);
    if ((temp_r1 >= 0) && (temp_r1 < 0x20)) {
        var_r2 = 0;
    } else if ((temp_r1 >= 0x20) && (temp_r1 < 0x28)) {
        var_r2 = 1;
    } else if ((temp_r1 >= 0x28) && (temp_r1 < 0x38)) {
        var_r2 = 2;
    } else if ((temp_r1 >= 0x38) && (temp_r1 < 0x40)) {
        var_r2 = 1;
    }
    if (var_r2 != M2C_FIELD(arg0, s32 *, 0xB8)) {
        M2C_FIELD(arg0, s32 *, 0xB8) = var_r2;
        return var_r2;
    }
    return -1;
}
