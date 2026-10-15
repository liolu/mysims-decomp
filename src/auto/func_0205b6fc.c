#include "m2c.h"

s32 func_0205b6fc(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50) * ((M2C_FIELD(arg0, u16 *, 0x4C) * M2C_FIELD(arg0, u16 *, 0x4E)) << 5);
}
