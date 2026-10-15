#include "m2c.h"

M2C_UNK func_02038f48();                            /* extern */
extern M2C_UNK data_020d8f14;

M2C_UNK **func_02038ed0(M2C_UNK **arg0) {
    *arg0 = &data_020d8f14;
    func_02038f48();
    return arg0;
}
