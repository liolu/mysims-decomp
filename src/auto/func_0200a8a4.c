#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern M2C_UNK data_02106f20;

s32 func_0200a8a4(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_0200856c();
    temp_r4 = M2C_FIELD(&data_02106f20, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        func_02008580(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_02106f20, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_02106f20, s32 *, 0x10) = 0;
    }
    func_02008580(temp_r0);
    return (s32) temp_r4;
}
