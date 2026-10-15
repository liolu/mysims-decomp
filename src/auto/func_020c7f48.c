#include "m2c.h"

s32 func_020c7f48(void *arg0, s32 arg1) {
    if (!(M2C_FIELD(arg0, s32 *, 0x9C) & (1 << arg1))) {
        return 0;
    }
    return (arg1 * 0x820) + M2C_FIELD(arg0, s32 *, 0x88) + 0x800;
}
