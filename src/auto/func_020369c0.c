#include "m2c.h"

M2C_UNK func_02034d50();                            /* extern */

void func_020369c0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        func_02034d50();
    }
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}
