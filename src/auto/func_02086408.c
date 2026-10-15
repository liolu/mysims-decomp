#include "m2c.h"

M2C_UNK func_0206339c(s32);                         /* extern */
extern M2C_UNK data_020fba9c;

void *func_02086408(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fba9c;
    func_0206339c(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    return arg0;
}
