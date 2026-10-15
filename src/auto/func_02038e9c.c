#include "m2c.h"

void func_02038e9c(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x1000) {
        var_r1 = 0x1000;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4) = var_r1;
}
