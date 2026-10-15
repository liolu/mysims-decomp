#include "m2c.h"

extern M2C_UNK data_020d8ff0;
extern M2C_UNK func_02044124;

void func_02047c5c(void) {
    M2C_FIELD(&data_020d8ff0, M2C_UNK **, 8) = &func_02044124;
    M2C_FIELD(&data_020d8ff0, s32 *, 0xC)    = 3;
}
