#include "m2c.h"

extern M2C_UNK data_020d0af4;

void *func_020603dc(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020d0af4 + (arg0 * 8));
}
