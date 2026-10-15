#include "engine.h"
#include "m2c.h"

M2C_UNK func_02071d74(M2C_UNK, M2C_UNK);
M2C_UNK func_020af3d0(M2C_UNK);

void func_02071cf8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r7;

    var_r7 = 0;
    do {
        if (var_r7 == arg2) {
            M2C_FIELD((arg0 + func_020af3d0((s32) (u16) (func_02071d74(arg0, arg2) + (u16) arg1))), s8 *, 0xAF2) = 1;
        } else {
            M2C_FIELD((arg0 + func_020af3d0((s32) (u16) (func_02071d74(arg0, var_r7) + (u16) arg1))), s8 *, 0xAF2) = 0;
        }
        var_r7 += 1;
    } while (var_r7 < 6);
}
