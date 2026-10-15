#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern M2C_UNK data_02106f20;

s32 func_0200a6e8(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200856c();
    if (M2C_FIELD(&data_02106f20, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_02106f20, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_02106f20, s32 *, 0x20);
    }
    func_02008580(temp_r0);
    return var_r4;
}
