#include "m2c.h"

s32 func_02002324(s32, s32);                        /* extern */

void func_02038e40(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r1;

    var_r1  = arg1;
    temp_r4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8), u16 *, 4) << 0xC;
    if (var_r1 < 0) {
        var_r1 = temp_r4 + func_02002324(var_r1, temp_r4);
    }
    if (var_r1 == temp_r4) {
        var_r1 = 0;
    }
    if (var_r1 > temp_r4) {
        var_r1 = func_02002324(var_r1, temp_r4);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0) = var_r1;
}
