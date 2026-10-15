#include "m2c.h"

extern M2C_UNK *data_020d8aa4;
extern M2C_UNK func_0203700c;

void func_02036eb4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = (M2C_UNK *) data_020d8aa4;
    data_020d8aa4                     = &func_0203700c;
}
