#include "m2c.h"

s32 func_020c0968(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x80) > 0x82) {
        return 1;
    }
    return 0;
}
