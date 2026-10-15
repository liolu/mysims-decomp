#include "engine.h"
#include "m2c.h"

void func_0200431c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020bfba4(s32 arg0) {
    s32 temp_r1;
    s32 temp_r2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (M2C_FIELD(arg0, u8 *, 0x19) != 0) {
        func_0200431c(0x04000050, temp_r1, temp_r2);
    } else {
        func_0200431c(0x04001050, temp_r1, temp_r2);
    }
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
}
