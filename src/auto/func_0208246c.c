#include "m2c.h"

s32 func_0202003c(s32, s32);                        /* extern */
extern M2C_UNK data_020d1e4c;
extern void *data_02118994;

s32 func_0208246c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 temp_r0;
    s32 var_r1;
    s32 var_r3;
    u16 temp_ip_2;

    var_r1    = arg1;
    var_r3    = 0;
    temp_ip_2 = M2C_FIELD(data_02118994, volatile u16 *, 0x9A2);
    if (temp_ip_2 != 0) {
        var_r3 = *((M2C_UNK *) ((s8 *) &data_020d1e4c + ((temp_ip_2 - 1) * 4)));
    }
    temp_ip = *((M2C_UNK *) ((s8 *) &data_020d1e4c + (M2C_FIELD(data_02118994, volatile u16 *, 0x9A2) * 4)));
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(data_02118994, volatile u16 *, 0x9A4) - var_r3;
    }
    if ((s32) M2C_FIELD(data_02118994, volatile u16 *, 0x9A4) >= temp_ip) {
        return 0x64;
    }
    if (var_r1 < 0) {
        return 0;
    }
    temp_r0 = var_r1 * 0x64;
    if (arg2 != 0) {
        return func_0202003c(temp_r0 << 0xC, temp_ip - var_r3);
    }
    return func_0202003c(temp_r0, temp_ip - var_r3);
}
