#include "m2c.h"

M2C_UNK func_02060530(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020fb748;

void *func_02083ae4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fb748;
    func_02060530(arg0 + 4, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x18)  = 0;
    return arg0;
}
