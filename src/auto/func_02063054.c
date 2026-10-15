#include "m2c.h"

M2C_UNK func_02009108(s32, M2C_UNK, s32);           /* extern */

void func_02063054(s32 arg0, void *arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    func_02009108(M2C_FIELD(arg1, s32 *, 0xC) + arg2, arg3, arg4);
}
