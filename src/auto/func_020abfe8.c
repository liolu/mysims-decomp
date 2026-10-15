#include "m2c.h"

M2C_UNK func_02086cf4(s32);                         /* extern */

void func_020abfe8(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    func_02086cf4(arg0 + 0x2E50);
    var_r5 = arg0 + 0x306C;
    var_r4 = 0;
    do {
        func_02086cf4(var_r5);
        var_r4 += 1;
        var_r5 += 0xB8;
    } while (var_r4 < 0xD);
}
