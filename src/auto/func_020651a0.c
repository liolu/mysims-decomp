#include "m2c.h"

M2C_UNK func_020634f8(s32, M2C_UNK);                /* extern */

void func_020651a0(s32 arg0) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = arg0 + 0x724;
    var_r5 = 0;
    do {
        func_020634f8(var_r6, 0x2000);
        var_r5 += 1;
        var_r6 += 0x78;
    } while (var_r5 < 5);
}
