#include "m2c.h"

M2C_UNK func_020239e0();                            /* extern */

void func_02023a40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    func_020239e0();
}
