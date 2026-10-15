#include "engine.h"
#include "m2c.h"

void func_0205b1b0(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0205b21c(s32 arg0, s32 arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0xC) == arg1) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r1 == -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        return;
    }
    func_0205b1b0(arg0, temp_r1, arg1);
}
