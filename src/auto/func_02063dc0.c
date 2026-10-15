#include "m2c.h"

s32 func_0202337c(s32, s16);                        /* extern */
M2C_UNK func_02024350(s32, s32, s32);               /* extern */

void func_02063dc0(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    func_02024350(arg0 + 0xC, func_0202337c(arg2, arg3), arg1);
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 8)    = arg2;
    M2C_FIELD(arg0, s16 *, 0x64) = arg3;
}
