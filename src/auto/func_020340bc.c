#include "m2c.h"

M2C_UNK func_020345c0();                            /* extern */
extern M2C_UNK data_020d8be8;

void *func_020340bc(void *arg0) {
    func_020345c0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8be8;
    M2C_FIELD(arg0, s32 *, 0x24)   = 5;
    return arg0;
}
