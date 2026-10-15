#include "m2c.h"

extern s32 data_02118994;

s32 func_0207d698(void *arg0) {
    s32 var_ip;
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0);
    var_ip  = 0;
    if (temp_r3 > 5U) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 4) <= (u32) M2C_FIELD((temp_r3 + data_02118994), u8 *, 0x9AD)) {
        var_ip = 1;
    }
    return var_ip;
}
