#include "m2c.h"

void func_02071190(s32 *arg0, u32 arg1, s16 arg2) {
    if (arg1 >= 8U) {
        return;
    }
    M2C_FIELD((*arg0 + (arg1 * 2)), s16 *, 0x2928) = arg2;
}
