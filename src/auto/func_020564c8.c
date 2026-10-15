#include "m2c.h"

M2C_UNK func_02038c4c(void *);                      /* extern */
M2C_UNK func_02060530(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020dd9b8;

void *func_020564c8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dd9b8;
    func_02060530(arg0 + 0xC, 0);
    func_02038c4c(arg0 + 0x1C);
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    return arg0;
}
