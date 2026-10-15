#include "m2c.h"

M2C_UNK func_02064098();                            /* extern */
extern M2C_UNK data_020f9728;

void *func_0206371c(void *arg0) {
    func_02064098();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f9728;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0x4E434752;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    return arg0;
}
