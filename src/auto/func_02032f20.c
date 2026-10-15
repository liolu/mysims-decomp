#include "m2c.h"

M2C_UNK func_02034a78();                            /* extern */
extern M2C_UNK data_020d8ae0;
extern M2C_UNK data_020d8bd4;
extern M2C_UNK data_020d8c9c;

void *func_02032f20(void *arg0) {
    func_02034a78();
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020d8ae0;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &data_020d8c9c;
    M2C_FIELD(arg0, s32 *, 0x2C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x30)      = 0;
    M2C_FIELD(arg0, s32 *, 0x34)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &data_020d8bd4;
    M2C_FIELD(arg0, s32 *, 0x38)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x44) = &data_020d8c9c;
    M2C_FIELD(arg0, s32 *, 0x48)      = 0;
    M2C_FIELD(arg0, s32 *, 0x4C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x50)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x44) = &data_020d8bd4;
    M2C_FIELD(arg0, s32 *, 0x54)      = 1;
    M2C_FIELD(arg0, s8 *, 0x24)       = 1;
    return arg0;
}
