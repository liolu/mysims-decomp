#include "m2c.h"

extern M2C_UNK data_020fc07c;
extern void *data_02118998;

s32 func_0208660c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if ((var_r0 == 0x35) && ((u32) M2C_FIELD(data_02118998, u16 *, 0x9720) >= 2U)) {
        var_r0 = 0x36;
    }
    if (var_r0 >= 0x38) {
        var_r0 = 0;
    }
    return (0x24 * var_r0) + (s32) &data_020fc07c;
}
