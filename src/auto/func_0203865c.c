#include "m2c.h"

M2C_UNK func_02060604(void *);                      /* extern */

void func_0203865c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) == M2C_FIELD(arg0, s32 *, 0x10)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    func_02060604(arg0 + 0xC);
}
