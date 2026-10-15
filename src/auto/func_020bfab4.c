#include "m2c.h"

s32 func_020bfab4(void *arg0) {
    M2C_UNK (*temp_r3)(s32, s32);

    temp_r3 = M2C_FIELD(arg0, M2C_UNK(**)(s32, s32), 0x18);
    if (temp_r3 != NULL) {
        temp_r3((s32) M2C_FIELD(arg0, s32 *, 0x10) >> 0xC, (s32) M2C_FIELD(arg0, s32 *, 0x14) >> 0xC);
    }
    return 0;
}
