#include "m2c.h"

M2C_UNK func_0205b5c0();                            /* extern */

void func_0205ecec(void *arg0) {
    func_0205b5c0();
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) | 0x10000);
}
