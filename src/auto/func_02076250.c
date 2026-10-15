#include "m2c.h"

extern u16 data_021188a8;

s32 func_02076250(s32 *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if (data_021188a8 & *arg0) {
        var_r0 = 1;
    }
    return var_r0;
}
