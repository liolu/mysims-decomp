#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
s32 func_0200b0a0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_02108b70;

void func_0200e20c(void) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_0200856c();
    if (func_0200b0a0(6, 0x03000000, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        func_02008580(temp_r4);
        M2C_FIELD(&data_02108b70, u16 *, 0x38) = (u16) (M2C_FIELD(&data_02108b70, u16 *, 0x38) | 1);
        if (M2C_FIELD(&data_02108b70, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4) == NULL) {
            return;
        }
        M2C_FIELD(&data_02108b70, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4)(0, 4, 0);
        return;
    }
    M2C_FIELD(&data_02108b70, u16 *, 0x3A) = (u16) (M2C_FIELD(&data_02108b70, u16 *, 0x3A) | 1);
    M2C_FIELD(&data_02108b70, u16 *, 0x38) = (u16) (M2C_FIELD(&data_02108b70, u16 *, 0x38) & ~1);
    func_02008580(temp_r4);
}
