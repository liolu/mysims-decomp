#include "m2c.h"

M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
M2C_UNK func_02060504();                            /* extern */
extern M2C_UNK data_020f94dc;

M2C_UNK **func_0206042c(M2C_UNK **arg0) {
    *arg0 = &data_020f94dc;
    func_02060504();
    func_0204306c(arg0);
    return arg0;
}
