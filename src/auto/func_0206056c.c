#include "m2c.h"

M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
M2C_UNK func_02060604();                            /* extern */
extern M2C_UNK data_020f94ec;

M2C_UNK **func_0206056c(M2C_UNK **arg0) {
    *arg0 = &data_020f94ec;
    func_02060604();
    func_0204306c(arg0);
    return arg0;
}
