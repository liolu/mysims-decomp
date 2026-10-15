#include "m2c.h"

s32 func_0208bec8(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 == M2C_FIELD(arg0, s32 *, 0x10)) && ((s32) M2C_FIELD(arg0, s32 *, 0xA8) >= arg2)) {
        return 1;
    }
    return 0;
}
