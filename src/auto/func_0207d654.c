#include "m2c.h"

extern void *data_02118994;

s32 func_0207d654(void) {
    s32 var_lr;
    u8 temp_r3;
    void *temp_ip;

    var_lr = 0;
    do {
        temp_ip = data_02118994 + var_lr;
        temp_r3 = M2C_FIELD(temp_ip, u8 *, 0x9B3);
        var_lr += 1;
        if (temp_r3 == (M2C_FIELD(data_02118994, s32 *, 0x13C) + 1)) {
            M2C_FIELD(temp_ip, s8 *, 0x9B3) = 0;
        }
    } while (var_lr < 0x11);
    return 1;
}
