#include "m2c.h"

M2C_UNK func_020344e8();                            /* extern */
extern M2C_UNK data_020d8c08;

void *func_020345c0(void *arg0) {
    func_020344e8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8c08;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    return arg0;
}
