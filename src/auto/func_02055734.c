#include "engine.h"
#include "m2c.h"

s32 func_02055734(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r4;

    var_r4 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x108) != 0) && (M2C_FIELD(arg0, u8 *, 0x107) == 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x110);
        var_r4  = 1;
        if ((temp_r0 != 0) && (func_02055734(temp_r0) == 0)) {
            var_r4 = 0;
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x118);
        if ((temp_r0_2 != 0) && (func_02055734(temp_r0_2) == 0)) {
            var_r4 = 0;
        }
    }
    return var_r4;
}
