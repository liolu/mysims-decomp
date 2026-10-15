#include "m2c.h"

u16 func_02071228(void **arg0, s32 arg1) {
    u16 var_r2;

    var_r2 = 0;
    if (arg1 == 1) {
        var_r2 = M2C_FIELD(*arg0, u16 *, 0x2B18);
    } else if (arg1 == 4) {
        var_r2 = M2C_FIELD(*arg0, u16 *, 0x2B1A);
    }
    return var_r2;
}
