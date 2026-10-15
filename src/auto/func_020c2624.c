#include "m2c.h"

s32 func_020c2624(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2AC) == -1) {
        return M2C_FIELD(arg0, s32 *, 0x13C);
    }
    return 0;
}
