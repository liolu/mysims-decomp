#include "m2c.h"

s32 func_0209c98c(void *arg0) {
    s32 temp_r1;

    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
        return 0;
    }
    temp_r1                      = M2C_FIELD(arg0, s32 *, 0xA8) + 1;
    M2C_FIELD(arg0, s32 *, 0xA8) = temp_r1;
    if (temp_r1 <= 0) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & ~4);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0x1000;
    return 0;
}
