#include "m2c.h"

s8 func_02071cc0();                                 /* extern */
extern s8 data_020d0da4;

void func_0207095c(void *arg0) {
    s32 var_r2;
    s8 *var_r3;
    s8 temp_r1;
    void *temp_r0;

    var_r3 = &data_020d0da4;
    var_r2 = 0;
    do {
        temp_r1 = *var_r3;
        var_r3 += 1;
        temp_r0 = arg0 + var_r2;
        var_r2 += 1;
        M2C_FIELD(temp_r0, s8 *, 4) = temp_r1;
    } while (var_r2 < 0x10);
    M2C_FIELD(arg0, s8 *, 0x14) = func_02071cc0();
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
    M2C_FIELD(arg0, s8 *, 0x17) = 0;
}
