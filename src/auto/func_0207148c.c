#include "m2c.h"

void func_0207148c(void **arg0) {
    void *temp_r1;
    void *temp_r2;

    temp_r2                         = *arg0;
    M2C_FIELD(temp_r2, s32 *, 0x60) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x60) - 1);
    temp_r1                         = *arg0;
    if ((s32) M2C_FIELD(temp_r1, s32 *, 0x60) < 0) {
        M2C_FIELD(temp_r1, s32 *, 0x60) = 0;
    }
}
