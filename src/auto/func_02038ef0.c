#include "m2c.h"

M2C_UNK func_02038f48();                            /* extern */
M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d8f14;

M2C_UNK **func_02038ef0(M2C_UNK **arg0) {
    *arg0 = &data_020d8f14;
    func_02038f48();
    func_0204306c(arg0);
    return arg0;
}
