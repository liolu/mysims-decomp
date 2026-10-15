#include "m2c.h"

void func_02071118(s32 *arg0, u32 arg1, s32 arg2) {
    if (arg1 < 0x12U) {
        M2C_FIELD((*arg0 + (arg1 * 4)), s32 *, 0x360) = arg2;
    }
}
