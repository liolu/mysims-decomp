#include "m2c.h"

M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
M2C_UNK func_02060e40();                            /* extern */
extern M2C_UNK data_020f94fc;

M2C_UNK **func_02060c40(M2C_UNK **arg0) {
    *arg0 = &data_020f94fc;
    func_02060e40();
    func_0204306c(arg0);
    return arg0;
}
