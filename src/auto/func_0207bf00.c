#include "m2c.h"

extern void *data_02118998;

s32 func_0207bf00(void *arg0) {
    M2C_FIELD(data_02118998, s32 *, 0x38C4) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(data_02118998, s32 *, 0x38E8) = (s32) M2C_FIELD(arg0, s32 *, 4);
    return 1;
}
