#include "m2c.h"

M2C_UNK func_020634d8(s32);                         /* extern */

void func_02066b98(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x724;
    var_r4 = 0;
    do {
        func_020634d8(var_r5);
        var_r4 += 1;
        var_r5 += 0x78;
    } while (var_r4 < 2);
}
