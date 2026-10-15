#include "m2c.h"

extern M2C_UNK data_020d8c9c;
extern M2C_UNK data_02102684;

void func_020ba07c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8c9c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102684;
}
