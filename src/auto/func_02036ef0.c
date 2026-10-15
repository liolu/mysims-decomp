#include "m2c.h"

extern s32 data_020d8aa4;

void func_02036ef0(void *arg0) {
    data_020d8aa4                = M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}
