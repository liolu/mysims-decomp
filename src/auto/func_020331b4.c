#include "m2c.h"

s32 func_020331b4(void *arg0, u16 arg1) {
    u16 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), u16 *, 4);
    }
    return (0x20 << (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 6) & 1)) * var_r1;
}
