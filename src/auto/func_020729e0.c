#include "m2c.h"

extern void *data_02118998;

s32 func_020729e0(void) {
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x10000);
    return 1;
}
