#include "engine.h"
#include "m2c.h"

void func_0203894c(M2C_UNK, M2C_UNK);

s32 func_020556a4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;

    var_r1 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x104) != 0) && (M2C_FIELD(arg0, s32 *, 0xCC) != 0)) {
        if ((M2C_FIELD(arg0, u8 *, 0x108) == 0) || (M2C_FIELD(arg0, u8 *, 0x107) != 0)) {
            func_0203894c(arg0 + 0xD4, 1);
            var_r1                       = 1;
            M2C_FIELD(arg0, u8 *, 0x108) = 1U;
            M2C_FIELD(arg0, u8 *, 0x107) = 0U;
        } else {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x110);
            if (temp_r0 != 0) {
                var_r1 = func_020556a4(temp_r0);
            }
            if (var_r1 == 0) {
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x118);
                if (temp_r0_2 != 0) {
                    var_r1 = func_020556a4(temp_r0_2);
                }
            }
        }
    }
    return var_r1;
}
