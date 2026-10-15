#include "m2c.h"

M2C_UNK func_0206353c(s32);                         /* extern */

void func_02086c90(void *arg0, s16 arg1) {
    func_0206353c(arg0 + 0x30);
    M2C_FIELD(arg0, s16 *, 0xC) = arg1;
}
