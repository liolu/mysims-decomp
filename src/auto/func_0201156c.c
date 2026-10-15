#include "m2c.h"

M2C_UNK func_02006bb4(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02007000(s32, M2C_UNK);                /* extern */
M2C_UNK func_02009308(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0200b0a0(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_02011468();                                /* extern */
extern M2C_UNK data_02109568;

s32 func_0201156c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02011468();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02009308(arg0, temp_r0, arg1);
    func_02007000(temp_r0, arg1);
    temp_r4 = func_0200b0a0(0xA, temp_r0, 0);
    func_02006bb4(&data_02109568, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
