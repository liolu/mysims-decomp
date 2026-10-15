#include "m2c.h"

M2C_UNK func_020ae978(s32);                         /* extern */

void func_020ae28c(void *arg0) {
    s32 var_r4;
    s32 var_r5;
    void *var_r6;

    var_r6 = arg0;
    var_r5 = var_r6 + 0x660;
    var_r4 = 0;
    do {
        if (M2C_FIELD(var_r6, u8 *, 0x6AC) != 0) {
            func_020ae978(var_r5);
        }
        var_r4 += 1;
        var_r6 += 0x50;
        var_r5 += 0x50;
    } while (var_r4 < 0xA);
}
