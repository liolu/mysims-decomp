#include "m2c.h"

extern M2C_UNK data_0210fb40;

u16 func_02016f28(void) {
    return M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), u16 *, 0xC);
}
