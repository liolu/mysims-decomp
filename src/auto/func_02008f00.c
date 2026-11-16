/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_01ff8448(s32, s32, s32, s32);          /* extern */
M2C_UNK func_02005b28(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02005c44(M2C_UNK);                     /* extern */
extern M2C_UNK data_02106ecc;
extern M2C_UNK func_02008fac;

void func_02008f00(void) {
    s32 temp_r4;
    u32 temp_r1;
    u32 var_r5;

    var_r5 = M2C_FIELD(&data_02106ecc, u32 *, 0xC);
    if (var_r5 == 0) {
        return;
    }
    if (var_r5 >= 0x1D8U) {
        var_r5 = 0x1D8;
    }
    temp_r4                               = M2C_FIELD(&data_02106ecc, s32 *, 8);
    temp_r1                               = M2C_FIELD(&data_02106ecc, u32 *, 0xC) - var_r5;
    M2C_FIELD(&data_02106ecc, u32 *, 0xC) = temp_r1;
    M2C_FIELD(&data_02106ecc, s32 *, 8)   = (s32) (temp_r4 + var_r5);
    if (temp_r1 == 0) {
        func_02005b28(M2C_FIELD(&data_02106ecc, s32 *, 4), &func_02008fac, 0);
        func_01ff8448(M2C_FIELD(&data_02106ecc, s32 *, 4), temp_r4, 0x04000400, -0x3BC00000 | (var_r5 >> 2));
        func_02005c44(0x200000);
        return;
    }
    func_01ff8448(M2C_FIELD(&data_02106ecc, s32 *, 4), temp_r4, 0x04000400, 0x84400000 | (var_r5 >> 2));
    func_02005c44(0x200000);
}
