#include "m2c.h"

M2C_UNK func_02086c90();                            /* extern */

void func_020870d4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xE) = arg1;
    func_02086c90();
}
