#include "m2c.h"

s32 func_020c6a24(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0xC4) + (arg1 << 6) + 0x1C;
}
