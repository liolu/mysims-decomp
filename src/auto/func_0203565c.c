#include "m2c.h"

u32 func_0203565c(s32 *arg0) {
    s32 temp_r1;

    temp_r1 = *arg0;
    if ((s32) ((u32) (temp_r1 & 0xF0) >> 4) < 4) {
        return (u32) (temp_r1 & ~0xFF) >> 8;
    }
    return 0U;
}
