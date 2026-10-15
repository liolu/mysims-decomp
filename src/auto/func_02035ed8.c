#include "m2c.h"

void func_02035ed8(s32 arg0, u32 arg1, s32 arg2) {
    if (arg1 < 0x20U) {
        M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x20) = arg2;
    }
}
