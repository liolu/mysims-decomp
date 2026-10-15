#include "m2c.h"

M2C_UNK func_02005c14(M2C_UNK);                     /* extern */
extern M2C_UNK data_02106e9c;

void func_02008078(void) {
    if (M2C_FIELD(&data_02106e9c, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02106e9c, u16 *, 0)    = 1U;
    M2C_FIELD(&data_02106e9c, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02106e9c, s32 *, 0x10) = 0;
    func_02005c14(4);
    M2C_FIELD(&data_02106e9c, s32 *, 8) = 0;
    M2C_FIELD(&data_02106e9c, s32 *, 4) = 0;
}
