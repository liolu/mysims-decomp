#include "m2c.h"

M2C_UNK func_020bf87c(void *);                      /* extern */
M2C_UNK func_020bfb50(void *);                      /* extern */
M2C_UNK func_020bfbe8();                            /* extern */
extern M2C_UNK data_021035d4;

void *func_020c097c(void *arg0) {
    func_020bfbe8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021035d4;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    M2C_FIELD(arg0, s32 *, 0x84)   = 1;
    M2C_FIELD(arg0, s32 *, 0x88)   = 0;
    M2C_FIELD(arg0, s32 *, 0x8C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x90)   = 0;
    func_020bf87c(arg0 + 0x94);
    func_020bfb50(arg0 + 0x148);
    func_020bfb50(arg0 + 0x164);
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
    return arg0;
}
