#include "engine.h"
#include "m2c.h"

void func_02009124(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02027f9c(M2C_UNK, M2C_UNK);
void func_02028118(M2C_UNK, M2C_UNK);

extern s32 data_0211191c;

void func_02028180(s32 arg0) {
    u8 sp0[392];
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;

    if ((M2C_FIELD(arg0, s32 *, 0) & 0x10) == 0x10) {
        func_02009124(0, arg0 + 0x3C, 8);
        func_02009124(0, arg0 + 0x44, 8);
        func_02009124(0, arg0 + 0x4C, 8);
        temp_r1 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r1 != 0) {
            func_02028118(arg0 + 0x3C, temp_r1);
        }
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r1_2 != 0) {
            func_02028118(arg0 + 0x44, temp_r1_2);
        }
        temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r1_3 != 0) {
            func_02028118(arg0 + 0x4C, temp_r1_3);
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x10);
    }
    if (data_0211191c != 0) {
        func_02027f9c(data_0211191c, arg0);
        return;
    }
    data_0211191c = (s32) sp0;
    func_02027f9c((s32) sp0, arg0);
    data_0211191c = 0;
}
