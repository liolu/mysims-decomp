#include "m2c.h"

extern s32 data_02118994;

s32 func_0207c568(void *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((s32) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + data_02118994), u8 *, 0xCAA) >= (s32) M2C_FIELD(arg0, s32 *, 4)) {
        var_r0 = 1;
    }
    return var_r0;
}
