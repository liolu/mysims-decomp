#include "m2c.h"

s32 func_020be624(void *arg0) {
    s32 temp_r3;

    if (M2C_FIELD(arg0, u8 *, 0x2C6) != 0) {
        return;
    }
    temp_r3                    = M2C_FIELD(arg0, s32 *, 4) + 1;
    M2C_FIELD(arg0, s32 *, 4)  = temp_r3;
    return *(s32 *) 0x04001014 = 0x01FF0000 & (temp_r3 << 0x10);
}
