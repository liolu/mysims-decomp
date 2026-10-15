#include "m2c.h"

u8 func_02071374(s32 *arg0, u32 arg1) {
    u8 var_r2;

    var_r2 = 0;
    if (arg1 < 4U) {
        var_r2 = (u8) M2C_FIELD((*arg0 + (arg1 * 2)), u16 *, 0x2B1C);
    }
    return var_r2;
}
