#include "engine.h"
#include "m2c.h"

void func_02003250(M2C_UNK);
void func_02008c4c(M2C_UNK);

extern s32 data_020d8264;
extern M2C_UNK data_02106aa8;

void func_020052b8(void) {
    if (data_020d8264 != -1) {
        func_02008c4c(data_020d8264);
    }
    func_02003250(M2C_FIELD(&data_02106aa8, s32 *, 0x14));
    M2C_FIELD(&data_02106aa8, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02106aa8, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02106aa8, s32 *, 0xC)  = 0;
}
