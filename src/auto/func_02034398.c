#include "m2c.h"

s32 func_02034358();                                /* extern */
M2C_UNK func_02034710(void *, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_02034398(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02034710(arg0, arg1, arg2, func_02034358(), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
}
