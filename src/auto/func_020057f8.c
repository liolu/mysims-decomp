#include "engine.h"
#include "m2c.h"

void func_020035d4(M2C_UNK);
void func_02008c4c(M2C_UNK);

extern s32 data_020d8264;
extern M2C_UNK data_02106ac4;

void func_020057f8(void) {
    if (data_020d8264 != -1) {
        func_02008c4c(data_020d8264);
    }
    func_020035d4(M2C_FIELD(&data_02106ac4, s32 *, 0xC));
    M2C_FIELD(&data_02106ac4, s32 *, 0xC) = 0;
    M2C_FIELD(&data_02106ac4, s32 *, 8)   = 0;
}
