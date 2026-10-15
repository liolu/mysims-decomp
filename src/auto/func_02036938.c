#include "m2c.h"

M2C_UNK func_020345c0();                            /* extern */
extern M2C_UNK data_020d8d0c;

void *func_02036938(void *arg0) {
    func_020345c0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8d0c;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    return arg0;
}
