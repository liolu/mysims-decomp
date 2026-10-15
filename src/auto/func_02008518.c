#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern M2C_UNK data_02106e9c;

s32 func_02008518(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0200856c();
    if (arg0 < (s32) M2C_FIELD(&data_02106e9c, s32 *, 4)) {
        M2C_FIELD(&data_02106e9c, s32 *, 8) = (s32) (M2C_FIELD(&data_02106e9c, s32 *, 8) + 1);
    }
    M2C_FIELD(&data_02106e9c, s32 *, 4) = arg0;
    func_02008580(temp_r0);
    return M2C_FIELD(&data_02106e9c, s32 *, 8);
}
