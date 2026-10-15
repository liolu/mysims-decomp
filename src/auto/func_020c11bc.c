#include "m2c.h"

s32 func_020c11bc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x88) == -1) {
        return M2C_FIELD(arg0, s32 *, 0x84);
    }
    return 0;
}
