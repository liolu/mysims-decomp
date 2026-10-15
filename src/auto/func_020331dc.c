#include "m2c.h"

s32 func_020331dc(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 8);
    return ((0x20 << (M2C_FIELD(temp_r3, u8 *, 6) & 1)) * arg1) + (s32) (temp_r3 + 8);
}
