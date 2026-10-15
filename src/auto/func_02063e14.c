#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202337c(M2C_UNK, M2C_UNK);
void func_0202438c(M2C_UNK);
void func_020243a4(M2C_UNK, M2C_UNK);

void func_02063e14(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r1 = func_0202337c(M2C_FIELD(arg0, s32 *, 8), arg1);
    temp_r0 = arg0 + 0xC;
    if (arg2 != 0) {
        func_0202438c(temp_r0);
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
    } else {
        func_020243a4(temp_r0, temp_r1);
    }
    M2C_FIELD(arg0, s16 *, 0x64) = (s16) arg1;
}
