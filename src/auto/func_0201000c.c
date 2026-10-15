#include "m2c.h"

extern M2C_UNK data_02108ce0;

s32 func_0201000c(void) {
    if (!(M2C_FIELD(&data_02108ce0, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
