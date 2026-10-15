#include "engine.h"
#include "m2c.h"

M2C_UNK func_02005c14(M2C_UNK);
void func_02007a60(M2C_UNK);

extern M2C_UNK data_02106e90;

void func_02007d08(void) {
    if (M2C_FIELD(&data_02106e90, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02106e90, u16 *, 0) = 1U;
    func_02007a60(1);
    M2C_FIELD(&data_02106e90, s32 *, 4) = 0;
    M2C_FIELD(&data_02106e90, s32 *, 8) = 0;
    func_02005c14(0x10);
}
