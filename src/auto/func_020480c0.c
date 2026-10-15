#include "m2c.h"

M2C_UNK func_02060604(s32);                         /* extern */

void func_020480c0(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x118;
    var_r4 = 0;
    do {
        func_02060604(var_r5);
        var_r4 += 1;
        var_r5 += 0xC;
    } while (var_r4 < 0x1C);
}
