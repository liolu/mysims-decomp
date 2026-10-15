#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201ec7c(M2C_UNK, M2C_UNK);
M2C_UNK func_0201f830(M2C_UNK);
M2C_UNK func_0201f8a4(M2C_UNK);
M2C_UNK func_0201fbbc(M2C_UNK, M2C_UNK);
M2C_UNK func_0202003c(M2C_UNK, M2C_UNK);

extern s32 data_0211899c;

void func_0209c088(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 var_r0;
    s32 var_r0_2;

    temp_r0   = func_0202003c(0x1E, data_0211899c);
    temp_r0_2 = temp_r0 << 0xC;
    if (temp_r0 > 0) {
        var_r0 = func_0201ec7c(0x3F000000, func_0201f8a4(temp_r0_2));
    } else {
        var_r0 = func_0201fbbc(func_0201f8a4(temp_r0_2), 0x3F000000);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + func_0201f830(var_r0));
    temp_r0_3                    = func_0202003c(0x1E, data_0211899c);
    temp_r0_4                    = temp_r0_3 << 0xC;
    if (temp_r0_3 > 0) {
        var_r0_2 = func_0201ec7c(0x3F000000, func_0201f8a4(temp_r0_4));
    } else {
        var_r0_2 = func_0201fbbc(func_0201f8a4(temp_r0_4), 0x3F000000);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + func_0201f830(var_r0_2));
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x10) >> 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x14) >> 0xC);
}
