#include "m2c.h"

extern M2C_UNK data_02116a40;

void func_0202ec14(s32 arg0) {
    M2C_FIELD(&data_02116a40, s32 *, 4) = (s32) (M2C_FIELD(&data_02116a40, s32 *, 4) & ~(1 << arg0));
}
