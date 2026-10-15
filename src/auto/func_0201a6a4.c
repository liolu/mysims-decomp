#include "m2c.h"

extern u32 data_020d8720;

s32 func_0201a6a4(void) {
    u32 temp_r0;

    temp_r0       = (data_020d8720 * 0x41C64E6D) + 0x3039;
    data_020d8720 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
