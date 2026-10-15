#include "m2c.h"

extern M2C_UNK *data_020d8aa8;
extern M2C_UNK func_0203723c;

void func_02037110(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = (M2C_UNK *) data_020d8aa8;
    data_020d8aa8                     = &func_0203723c;
}
