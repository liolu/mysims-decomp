#include "m2c.h"

extern M2C_UNK *data_020d8aac;
extern M2C_UNK func_02037288;

void func_02037130(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = (M2C_UNK *) data_020d8aac;
    data_020d8aac                     = &func_02037288;
}
