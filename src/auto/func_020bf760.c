#include "m2c.h"

M2C_UNK func_020bf5f0();                            /* extern */
extern M2C_UNK data_02103670;

void *func_020bf760(void *arg0) {
    func_020bf5f0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103670;
    M2C_FIELD(arg0, s8 *, 0x8C)    = 0;
    M2C_FIELD(arg0, s32 *, 0x90)   = 0;
    M2C_FIELD(arg0, s32 *, 0x94)   = 0;
    M2C_FIELD(arg0, s32 *, 0x98)   = 0;
    M2C_FIELD(arg0, s32 *, 0x9C)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA4)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA8)   = -1;
    return arg0;
}
