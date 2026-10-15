#include "m2c.h"

M2C_UNK func_0206054c(void *);                      /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
extern M2C_UNK data_020fb748;

void *func_02083b1c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fb748;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    func_02060604(arg0 + 4);
    func_0206054c(arg0 + 4);
    return arg0;
}
