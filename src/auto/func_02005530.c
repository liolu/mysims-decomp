#include "engine.h"
#include "m2c.h"

void func_02003920(M2C_UNK);
void func_02008c4c(M2C_UNK);

extern s32 data_020d8264;
extern M2C_UNK data_02106aa8;

void func_02005530(void) {
    if (data_020d8264 != -1) {
        func_02008c4c(data_020d8264);
    }
    func_02003920(M2C_FIELD(&data_02106aa8, s32 *, 0x18));
    M2C_FIELD(&data_02106aa8, s32 *, 0x18) = 0;
}
