#include "m2c.h"

s32 func_020714b4(void **arg0) {
    if ((s32) M2C_FIELD(*arg0, s32 *, 0x60) >= 8) {
        return 1;
    }
    return 0;
}
