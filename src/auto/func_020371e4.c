#include "engine.h"
#include "m2c.h"

void func_02036cd0(M2C_UNK);
void func_02037150(M2C_UNK);
void func_0203716c(M2C_UNK);

extern M2C_UNK data_02118958;

void func_020371e4(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    func_02037150(arg0);
    func_0203716c(arg0);
    if (M2C_FIELD(&data_02118958, s32 *, 4) == arg0) {
        M2C_FIELD(&data_02118958, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(arg0, s32 *, 0x30)        = 0;
    }
    func_02036cd0(arg0);
    M2C_FIELD(arg0, u8 *, 0x2C) = 0U;
}
