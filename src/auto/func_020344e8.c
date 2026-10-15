#include "m2c.h"

M2C_UNK func_020344d8(M2C_UNK **, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02034c9c();                            /* extern */
extern M2C_UNK data_020d8c18;

M2C_UNK **func_020344e8(M2C_UNK **arg0) {
    func_02034c9c();
    *arg0 = &data_020d8c18;
    func_020344d8(arg0, 0, 0, 0);
    return arg0;
}
