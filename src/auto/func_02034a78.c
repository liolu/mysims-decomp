#include "m2c.h"

extern M2C_UNK data_020d8c28;
extern M2C_UNK data_020d8c58;
extern M2C_UNK data_020d8c88;
extern M2C_UNK data_020d8c9c;

void func_02034a78(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)   = &data_020d8c58;
    M2C_FIELD(arg0, s8 *, 4)         = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0)   = &data_020d8c28;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &data_020d8c9c;
    M2C_FIELD(arg0, s32 *, 0x10)     = 0;
    M2C_FIELD(arg0, s32 *, 0x14)     = 0;
    M2C_FIELD(arg0, s32 *, 0x18)     = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &data_020d8c88;
    M2C_FIELD(arg0, s32 *, 0x1C)     = 0;
    M2C_FIELD(arg0, void **, 0x20)   = (void *) (arg0 + 0x1C);
}
