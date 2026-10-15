#include "engine.h"
#include "m2c.h"

void func_02017fd4(M2C_UNK);
void func_0201a6e8(M2C_UNK);

extern M2C_UNK data_02110190;

void func_02017fb0(void) {
    func_0201a6e8(1);
    M2C_FIELD(&data_02110190, s32 *, 0xC) = 1;
    func_02017fd4(1);
}
