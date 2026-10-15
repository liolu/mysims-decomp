#include "m2c.h"

void func_0203613c(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 arg4, s32 arg5) {
    if (arg4 != 0) {
        *arg0 -= 0x1000;
        *arg2 -= 0x1000;
    }
    if (arg5 == 0) {
        return;
    }
    *arg1 -= 0x1000;
    *arg3 -= 0x1000;
}
