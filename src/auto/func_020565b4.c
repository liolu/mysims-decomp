#include "m2c.h"

M2C_UNK func_02038d60(s32);                         /* extern */

void func_020565b4(void *arg0) {
    func_02038d60(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
