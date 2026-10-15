#include "m2c.h"

s32 func_020c227c(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x30) != 0) && (M2C_FIELD(arg0, u8 *, 0x88) != 0)) {
        return 1;
    }
    return 0;
}
