#include "m2c.h"

M2C_UNK func_02023a5c(void *);                      /* extern */
M2C_UNK func_02023aa0(void *);                      /* extern */
M2C_UNK func_020344e8(void *);                      /* extern */
M2C_UNK func_02060530(void *, M2C_UNK);             /* extern */
M2C_UNK func_02070844(void *);                      /* extern */
M2C_UNK func_02070878(void *);                      /* extern */
M2C_UNK func_020bf62c(void *);                      /* extern */
M2C_UNK func_020bf87c(void *);                      /* extern */
M2C_UNK func_020bfa4c(void *);                      /* extern */
M2C_UNK func_020bfbe8();                            /* extern */
extern M2C_UNK data_020d8e14;
extern M2C_UNK data_020d8e24;
extern M2C_UNK data_020d8e44;
extern M2C_UNK data_020f9780;
extern M2C_UNK data_020f9790;
extern M2C_UNK data_020f97b0;
extern M2C_UNK data_020f97c0;
extern M2C_UNK data_02103620;

void *func_020c28e0(void *arg0, s32 arg1) {
    func_020bfbe8(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103620;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    M2C_FIELD(arg0, s32 *, 0x84)   = 0;
    func_020344e8(arg0 + 0x88);
    M2C_FIELD(arg0, M2C_UNK **, 0x88) = &data_020d8e14;
    func_020344e8(arg0 + 0xA8);
    M2C_FIELD(arg0, M2C_UNK **, 0xA8) = &data_020d8e24;
    func_020344e8(arg0 + 0xC0);
    M2C_FIELD(arg0, M2C_UNK **, 0xC0) = &data_020d8e14;
    func_020344e8(arg0 + 0xE0);
    M2C_FIELD(arg0, M2C_UNK **, 0xE0) = &data_020d8e24;
    M2C_FIELD(arg0, s32 *, 0xF8)      = 0;
    func_020bfa4c(arg0 + 0xFC);
    func_020bfa4c(arg0 + 0x118);
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    func_020bf87c(arg0 + 0x13C);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &data_020f9780;
    func_02023a5c(arg0 + 0x1F4);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &data_020f97c0;
    func_020344e8(arg0 + 0x218);
    M2C_FIELD(arg0, M2C_UNK **, 0x218) = &data_020d8e44;
    M2C_FIELD(arg0, M2C_UNK **, 0x234) = &data_020f97b0;
    func_02060530(arg0 + 0x24C, 0);
    func_02023aa0(arg0 + 0x238);
    M2C_FIELD(arg0, M2C_UNK **, 0x234) = &data_020f9790;
    func_020344e8(arg0 + 0x258);
    M2C_FIELD(arg0, M2C_UNK **, 0x258) = &data_020d8e24;
    func_02070878(arg0 + 0x270);
    func_02070844(arg0 + 0x288);
    func_020bf62c(arg0 + 0x2A0);
    M2C_FIELD(arg0, s32 *, 0x32C) = 0;
    M2C_FIELD(arg0, s32 *, 0x330) = 0;
    func_020bf87c(arg0 + 0x334);
    M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F8) = 0;
    M2C_FIELD(arg0, s8 *, 0x424)  = 0;
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
    return arg0;
}
