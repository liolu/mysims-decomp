#include "m2c.h"

s32 func_02098ac0(void) {
    s32 var_r0;

    var_r0 = 1;
    if (*(s32 *) 0x04000064 & 0x80000000) {
        var_r0 = 0;
    }
    return var_r0;
}
