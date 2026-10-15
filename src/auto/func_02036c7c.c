#include "m2c.h"

s32 func_02021f78(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020346f8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_02036938;
extern M2C_UNK func_02036968;

s32 func_02036c7c(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;

    func_020346f8(arg0, 0, arg1);
    temp_r0 = func_02021f78(arg2, 0x2C, 8, &func_02036938, &func_02036968);
    if (temp_r0 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    return 1;
}
