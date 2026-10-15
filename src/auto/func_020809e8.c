#include "m2c.h"

extern void *data_02118998;

s32 func_020809e8(s32 *arg0) {
    M2C_FIELD(data_02118998, s32 *, 0x3C94) = (s32) *arg0;
    return 1;
}
