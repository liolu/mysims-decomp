#include "m2c.h"

s32 func_020a5028(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x8E4) == 0x7B) && ((u32) M2C_FIELD(arg0, u32 *, 0x8E8) <= 7U)) {
        return 1;
    }
    return 0;
}
