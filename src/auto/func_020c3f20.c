#include "m2c.h"

s32 func_020c3f20(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3F4) == -1) {
        return M2C_FIELD(arg0, s32 *, 0x3F0);
    }
    return 0;
}
