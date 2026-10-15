#include "m2c.h"

M2C_UNK func_02036c04();                            /* extern */
extern M2C_UNK data_020d8d44;

void *func_02037074(void *arg0) {
    func_02036c04();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8d44;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s8 *, 0x2C)    = 0;
    return arg0;
}
