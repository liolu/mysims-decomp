#include "m2c.h"

M2C_UNK func_020090f0(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK data_020d8c9c;
extern M2C_UNK data_020ff11c;

void *func_020a93d8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8c9c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ff11c;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    func_020090f0(0, arg0 + 0x18, 0x200);
    return arg0;
}
