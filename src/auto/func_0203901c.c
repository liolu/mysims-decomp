#include "m2c.h"

void func_0203901c(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 0x58);
    if ((M2C_FIELD(arg0, u8 *, 0x5C) != 0) && (var_r3 != NULL)) {
        do {
            temp_r0 = M2C_FIELD(var_r3, s32 *, 0x18);
            if (arg1 != 0) {
                var_r0 = temp_r0 | 2;
            } else {
                var_r0 = temp_r0 & ~2;
            }
            M2C_FIELD(var_r3, s32 *, 0x18) = var_r0;
            var_r3                         = M2C_FIELD(var_r3, void **, 0x14);
        } while (var_r3 != NULL);
    }
}
