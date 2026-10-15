#include "m2c.h"

extern M2C_UNK data_0210fb40;

s32 func_02016f9c(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
