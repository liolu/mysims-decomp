#include "m2c.h"

extern s32 data_020d8aac;

void func_0203716c(void *arg0) {
    data_020d8aac                = M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}
