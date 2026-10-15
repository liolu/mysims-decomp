#include "m2c.h"

M2C_UNK func_0206353c(void *, s32);                 /* extern */

void func_02086cac(void *arg0, s32 arg1) {
    func_0206353c(arg0 + 0x30, M2C_FIELD(arg0, u16 *, 0xE) + arg1);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) (M2C_FIELD(arg0, u16 *, 0xE) + arg1);
}
