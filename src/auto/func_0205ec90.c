#include "engine.h"
#include "m2c.h"

M2C_UNK func_02034040(M2C_UNK);

s32 func_0205ec90(s32 arg0) {
    s32 var_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x12C) == 0) && (M2C_FIELD(arg0, s32 *, 0x130) == 0)) {
        var_r0 = 0;
    } else {
        var_r0 = func_02034040(arg0 + 0x128);
    }
    return (s32) (u16) var_r0;
}
