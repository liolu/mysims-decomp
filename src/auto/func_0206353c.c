#include "m2c.h"

M2C_UNK func_02063e14(void *, u16, M2C_UNK);        /* extern */

void func_0206353c(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        M2C_FIELD(arg0, s8 *, 0x74) = 0;
        return;
    }
    func_02063e14(arg0 + 4, (u16) arg1, 1);
    M2C_FIELD(arg0, s8 *, 0x74) = 1;
}
