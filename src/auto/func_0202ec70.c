#include "m2c.h"

extern M2C_UNK data_02116ec0;

void func_0202ec70(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02116ec0 + (arg0 * 0x24))) = arg1;
}
