#include "m2c.h"

extern M2C_UNK *data_020d8aa0;
extern M2C_UNK func_02036fc0;

void func_02036e94(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = (M2C_UNK *) data_020d8aa0;
    data_020d8aa0                     = &func_02036fc0;
}
