#include "m2c.h"

extern M2C_UNK data_020d1e4c;
extern void *data_02118994;

s32 func_020748b4(void) {
    s32 var_r0;
    u16 temp_ip;

    var_r0  = 0;
    temp_ip = M2C_FIELD(data_02118994, u16 *, 0x9A2);
    if ((u32) temp_ip >= 5U) {
        return 0;
    }
    if ((s32) M2C_FIELD(data_02118994, u16 *, 0x9A4) >= (s32) * ((M2C_UNK *) ((s8 *) &data_020d1e4c + (temp_ip * 4)))) {
        var_r0 = 1;
    }
    return var_r0;
}
