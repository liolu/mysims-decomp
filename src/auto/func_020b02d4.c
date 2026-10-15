#include "m2c.h"

s32 func_020b02d4(void *arg0, s32 arg1, s32 arg2) {
    if ((M2C_FIELD(arg0, u8 *, 0x2D) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xB8) <= arg2) &&
        (arg2 < (s32) M2C_FIELD(arg0, s32 *, 0xC0)) && ((s32) M2C_FIELD(arg0, s32 *, 0xB4) <= arg1) &&
        (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0xBC))) {
        return 1;
    }
    return 0;
}
