#include "m2c.h"

M2C_UNK func_020344e8(void *);                      /* extern */
M2C_UNK func_020bfae0(void *);                      /* extern */
extern M2C_UNK data_020d8e14;
extern M2C_UNK data_020d8e24;
extern M2C_UNK data_021034b4;

void *func_020bfbe8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021034b4;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    func_020344e8(arg0 + 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &data_020d8e14;
    func_020344e8(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &data_020d8e24;
    M2C_FIELD(arg0, s32 *, 0x44)      = 0;
    func_020bfae0(arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    return arg0;
}
