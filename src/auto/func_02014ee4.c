#include "m2c.h"

M2C_UNK func_02014f10();                            /* extern */
extern M2C_UNK data_0210a0a0;

void func_02014ee4(void) {
    M2C_FIELD(&data_0210a0a0, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0210a0a0, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0210a0a0, s8 *, 0x24)  = 1;
    M2C_FIELD(&data_0210a0a0, s32 *, 0x14) = 0;
    func_02014f10();
}
