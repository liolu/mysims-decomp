#include "m2c.h"

M2C_UNK func_02064098();                            /* extern */
extern M2C_UNK data_020faea8;

void *func_02070844(void *arg0) {
    func_02064098();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020faea8;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0x4E414E52;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    return arg0;
}
