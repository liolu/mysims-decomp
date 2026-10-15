#include "engine.h"
#include "m2c.h"

M2C_UNK func_02056d48(M2C_UNK, M2C_UNK);
void func_020b43dc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020b829c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02118998;

s32 func_020b3bb0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r7;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x28);
    if (M2C_FIELD(arg0, s32 *, 0x2FB4) != temp_r1) {
        return 1;
    }
    temp_r7 = func_02056d48(data_02118998 + 0x273C, temp_r1);
    if (func_020b829c(arg0, arg1, arg2) != 0) {
        return 1;
    }
    func_020b43dc(arg0, temp_r7, arg1, arg2);
    return 1;
}
