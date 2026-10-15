#include "m2c.h"

M2C_UNK func_02060530(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020d8f04;

void *func_020384f0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8f04;
    func_02060530(arg0 + 0xC, 0);
    func_02060530(arg0 + 0x18, 0);
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}
