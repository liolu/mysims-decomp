#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);
M2C_UNK func_0200fc34(void);

extern M2C_UNK data_02108c34;

s32 func_0200f590(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_0200856c();
    if (M2C_FIELD(&data_02108c34, s32 *, 4) != 0) {
        func_02008580(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02108c34, s32 *, 4) = 1;
    func_02008580(temp_r0);
    M2C_FIELD(&data_02108c34, s32 *, 0x18) = 1;
    M2C_FIELD(&data_02108c34, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_02108c34, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_02108c34, s32 *, 8)    = arg1;
    M2C_FIELD(&data_02108c34, s32 *, 0x14) = arg2;
    if (func_0200fc34() != 0) {
        return 0;
    }
    return 3;
}
