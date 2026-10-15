#include "m2c.h"

M2C_UNK func_02009308(s32);                         /* extern */

s32 func_02032cec(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02009308(M2C_FIELD(arg0, s32 *, 0xA4) + arg3);
    return arg2;
}
