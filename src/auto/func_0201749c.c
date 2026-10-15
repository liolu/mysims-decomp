#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202003c(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0210fb84;

void func_0201749c(s32 arg0) {
    s32 temp_r1;

    temp_r1                                = arg0 - 2;
    M2C_FIELD(&data_0210fb84, s32 *, 8)    = temp_r1;
    M2C_FIELD(&data_0210fb84, s32 *, 0xC)  = func_0202003c(0x1E, temp_r1);
    M2C_FIELD(&data_0210fb84, s32 *, 0x10) = 0x1E;
}
