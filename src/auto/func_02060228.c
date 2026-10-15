#include "m2c.h"

void func_02060228(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x98) = (s16) (arg1 - 1);
}
