#include "m2c.h"

M2C_UNK func_02060530(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020d8ef4;

void *func_020389d4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8ef4;
    func_02060530(arg0 + 4, 0);
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
