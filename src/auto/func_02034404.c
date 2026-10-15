#include "m2c.h"

s32 func_02034404(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) - M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x10);
}
