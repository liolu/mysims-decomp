#include "m2c.h"

M2C_UNK func_020344e8(s32);                         /* extern */
extern M2C_UNK data_020d8e24;
extern M2C_UNK data_020d8e44;

void *func_020c73ac(void *arg0) {
    func_020344e8(arg0 + 0x10);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_020d8e44;
    func_020344e8(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &data_020d8e24;
    return arg0;
}
