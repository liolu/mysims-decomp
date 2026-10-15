#include "m2c.h"

M2C_UNK func_02060604(void *);                      /* extern */

void func_02083c64(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_02060604(arg0 + 4);
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
}
