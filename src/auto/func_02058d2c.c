#include "m2c.h"

M2C_UNK func_02060604();                            /* extern */

void func_02058d2c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_02060604();
}
