#include "m2c.h"

void func_020709d0(void *arg0) {
    void *temp_r2;

    temp_r2                       = arg0 + 0x138;
    M2C_FIELD(temp_r2, s16 *, 2)  = 0;
    M2C_FIELD(arg0, s16 *, 0x138) = 0;
    M2C_FIELD(temp_r2, s32 *, 4)  = 3;
}
