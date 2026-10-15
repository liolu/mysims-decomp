/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020af0d8(void *arg0, s16 arg1) {
    s32 temp_r3;
    s32 var_ip;
    s32 var_r3;

    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    temp_r3                      = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r3 <= 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    var_r3 = 0;
    if (temp_r3 <= 0) {
        return;
    }
    var_ip = 0;
    do {
        var_r3 += 1;
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 4) + var_ip), s16 *, 0xB2) = arg1;
        var_ip += 0x214;
    } while (var_r3 < (s32) M2C_FIELD(arg0, s32 *, 8));
}
