#include "m2c.h"

extern M2C_UNK data_02106b48;

s32 func_02006030(void) {
    return M2C_FIELD(&data_02106b48, s32 *, 0x20) = (s32) (M2C_FIELD(&data_02106b48, s32 *, 0x20) + 1);
}
