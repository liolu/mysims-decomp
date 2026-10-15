#include "engine.h"
#include "m2c.h"

void func_02036cd0(M2C_UNK);
void func_02036ed4(M2C_UNK);
void func_02036ef0(M2C_UNK);

extern s32 data_02118958;

void func_02036f68(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    func_02036ed4(arg0);
    func_02036ef0(arg0);
    if (data_02118958 == arg0) {
        data_02118958                = M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    func_02036cd0(arg0);
    M2C_FIELD(arg0, u8 *, 0x2C) = 0U;
}
