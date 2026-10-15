#include "m2c.h"

extern M2C_UNK data_02108ce0;

s32 func_02010028(void) {
    if (M2C_FIELD(&data_02108ce0, s32 *, 0x114) != 0) {
        return 1;
    }
    return 0;
}
