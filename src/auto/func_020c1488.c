#include "m2c.h"

M2C_UNK func_020344e8(void *);                      /* extern */
M2C_UNK func_020bf760(void *);                      /* extern */
M2C_UNK func_020bf87c(void *);                      /* extern */
M2C_UNK func_020bfa4c(void *);                      /* extern */
M2C_UNK func_020bfbe8();                            /* extern */
extern M2C_UNK data_020d8e14;
extern M2C_UNK data_020d8e24;
extern M2C_UNK data_02103588;

void *func_020c1488(void *arg0) {
    func_020bfbe8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103588;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    M2C_FIELD(arg0, s32 *, 0x84)   = 0;
    func_020344e8(arg0 + 0x88);
    M2C_FIELD(arg0, M2C_UNK **, 0x88) = &data_020d8e14;
    func_020344e8(arg0 + 0xA8);
    M2C_FIELD(arg0, M2C_UNK **, 0xA8) = &data_020d8e14;
    func_020344e8(arg0 + 0xC8);
    M2C_FIELD(arg0, M2C_UNK **, 0xC8) = &data_020d8e24;
    func_020344e8(arg0 + 0xE0);
    M2C_FIELD(arg0, M2C_UNK **, 0xE0) = &data_020d8e24;
    M2C_FIELD(arg0, s32 *, 0xF8)      = 0;
    func_020bfa4c(arg0 + 0xFC);
    func_020bfa4c(arg0 + 0x118);
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13C) = 1;
    func_020bf87c(arg0 + 0x140);
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    func_020bf760(arg0 + 0x200);
    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
    return arg0;
}
