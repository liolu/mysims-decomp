#include "engine.h"
#include "m2c.h"

void func_020ae6dc(M2C_UNK);

void func_020aee8c(s32 arg0) {
    s32 var_r5;
    s32 var_r6;
    void *temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
        return;
    }
    var_r5 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) <= 0) {
        return;
    }
    var_r6 = 0;
    do {
        temp_r0 = M2C_FIELD(arg0, s32 *, 4) + var_r6;
        if (M2C_FIELD(temp_r0, u8 *, 0x210) != 0) {
            func_020ae6dc((s32) temp_r0);
        }
        var_r5 += 1;
        var_r6 += 0x214;
    } while (var_r5 < (s32) M2C_FIELD(arg0, s32 *, 8));
}
