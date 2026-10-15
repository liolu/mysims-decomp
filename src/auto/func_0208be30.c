#include "m2c.h"

void func_0208be30(s32 arg0, s32 arg1, s32 arg2) {
    if ((arg1 >= 0) && (arg1 < 6)) {
        M2C_FIELD(((arg1 * 0x44) + arg0), s32 *, 0x124) = arg2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xE0) = arg2;
}
