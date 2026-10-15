#include "m2c.h"

M2C_UNK func_02022288(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_020346a4(s32, void *);                 /* extern */
M2C_UNK func_02060604(s32);                         /* extern */
extern M2C_UNK func_0206054c;

void func_0206db08(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r4;
    s32 var_r5;

    if (M2C_FIELD(arg0, u8 *, 0x1A9) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3A0);
    if (temp_r0 != 0) {
        func_020346a4(temp_r0, arg0 + 0x4E0);
        func_020346a4(M2C_FIELD(arg0, s32 *, 0x3A0), arg0 + 0x590);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3A4);
    if (temp_r0_2 != 0) {
        func_020346a4(temp_r0_2, arg0 + 0x5B0);
    }
    var_r4 = 0;
    var_r5 = 0;
    do {
        func_02060604(M2C_FIELD(arg0, s32 *, 0x6F4) + var_r5);
        var_r4 += 1;
        var_r5 += 0xC;
    } while (var_r4 < 2);
    func_02022288(M2C_FIELD(arg0, s32 *, 0x6F4), 0xC, 8, &func_0206054c);
    M2C_FIELD(arg0, s32 *, 0x6F4) = 0;
    M2C_FIELD(arg0, u8 *, 0x1A9)  = 0U;
}
