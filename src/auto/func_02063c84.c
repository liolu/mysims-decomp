#include "m2c.h"

M2C_UNK func_02060604(s32);                         /* extern */

void func_02063c84(void *arg0) {
    func_02060604(arg0 + 4);
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
}
