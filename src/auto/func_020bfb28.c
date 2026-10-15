#include "m2c.h"

void func_020bfb28(void *arg0) {
    M2C_UNK (*temp_r1)(s32);

    temp_r1 = M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x18);
    if (temp_r1 != NULL) {
        temp_r1(M2C_FIELD(arg0, s32 *, 0x10));
    }
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
}
