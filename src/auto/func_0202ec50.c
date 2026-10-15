#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02116ebc;

void func_0202ec50(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02116ebc + (arg0 * 0x24))) = (s32) (u16) arg1;
}
