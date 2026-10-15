#include "m2c.h"

s32 func_02026aa0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) & 2) {
        return 1;
    }
    return 0;
}
