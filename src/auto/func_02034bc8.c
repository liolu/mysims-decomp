#include "m2c.h"

M2C_UNK func_020085e8();                            /* extern */

void func_02034bc8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = 1;
    if (arg1 == 0) {
        return;
    }
    func_020085e8();
}
