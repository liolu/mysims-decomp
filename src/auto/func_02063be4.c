#include "m2c.h"

M2C_UNK func_02060530(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020f9744;

void *func_02063be4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f9744;
    func_02060530(arg0 + 4, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
    M2C_FIELD(arg0, s8 *, 0x15)  = 0;
    return arg0;
}
