#include "m2c.h"

M2C_UNK func_02060604();                            /* extern */
extern M2C_UNK data_020f94ec;

M2C_UNK **func_0206054c(M2C_UNK **arg0) {
    *arg0 = &data_020f94ec;
    func_02060604();
    return arg0;
}
