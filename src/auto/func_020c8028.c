#include "m2c.h"

s32 func_020c8028(void *arg0, s32 arg1) {
    return (arg1 * 0x820) + M2C_FIELD(arg0, s32 *, 0x88) + 0x800;
}
