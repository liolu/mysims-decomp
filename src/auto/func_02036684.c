#include "m2c.h"

M2C_UNK func_02035a6c(void *);                      /* extern */
M2C_UNK func_02036304(s32, void *);                 /* extern */
extern M2C_UNK data_020d8cc4;

void *func_02036684(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8cc4;
    func_02036304(arg0 + 0x1004, arg0);
    func_02035a6c(arg0 + 0x1160);
    M2C_FIELD(arg0, s8 *, 0x119C) = 0;
    return arg0;
}
