#include "m2c.h"

extern M2C_UNK data_021189d0;

s32 func_0205a9a0(s32 arg0) {
    s32 var_r2;

    var_r2 = 1;
    if (!(M2C_FIELD(&data_021189d0, s32 *, 4) & (1 << arg0))) {
        var_r2 = 0;
    }
    return var_r2;
}
