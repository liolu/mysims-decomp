#include "m2c.h"

extern M2C_UNK data_0210329c;

s32 func_020bf5c8(u32 arg0) {
    if (arg0 < 2U) {
        return *((M2C_UNK *) ((s8 *) &data_0210329c + (arg0 * 4)));
    }
    return 0;
}
