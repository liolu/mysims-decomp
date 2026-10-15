#include "engine.h"
#include "m2c.h"

M2C_UNK func_020978e0(M2C_UNK, M2C_UNK);
M2C_UNK func_02097a00(M2C_UNK, M2C_UNK);

extern s32 data_02118998;

void func_0207b1e0(s32 arg0) {
    if (*(M2C_UNK *) arg0 != 0) {
        func_020978e0(data_02118998 + 0x3CFC, 0);
        return;
    }
    func_02097a00(data_02118998 + 0x3CFC, 0);
}
