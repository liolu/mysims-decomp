#include "m2c.h"

s32 func_020606c0(void *, M2C_UNK *, M2C_UNK);      /* extern */
extern M2C_UNK data_020f91c0;

void func_0205e4d8(void *arg0) {
    s32 var_r4;

    var_r4 = 1;
    if ((M2C_FIELD(arg0, s32 *, 8) == 0) && (func_020606c0(arg0 + 4, &data_020f91c0, 0) == 0)) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
    }
}
