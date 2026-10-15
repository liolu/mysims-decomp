#include "engine.h"
#include "m2c.h"

s32 func_02070a68(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x178)              = 3;
    return M2C_FIELD((arg0 + 0x178), s16 *, 2) = 1;
}
