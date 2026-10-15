#include "m2c.h"

extern M2C_UNK data_021189a4;

s32 func_02042eec(s32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    if ((arg0 >= 0) && (arg0 < 4)) {
        var_r1 = *((M2C_UNK *) ((s8 *) &data_021189a4 + (arg0 * 4)));
    }
    return var_r1;
}
