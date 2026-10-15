#include "m2c.h"

extern M2C_UNK data_020d603c;

s32 func_020bf5e0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020d603c + (arg0 * 4)));
}
