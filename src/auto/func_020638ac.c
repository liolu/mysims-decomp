#include "m2c.h"

M2C_UNK func_02060604(void *);                      /* extern */

void func_020638ac(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_02060604(arg0 + 4);
}
