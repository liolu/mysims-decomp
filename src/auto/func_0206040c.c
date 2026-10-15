#include "m2c.h"

M2C_UNK func_02060504();                            /* extern */
extern M2C_UNK data_020f94dc;

M2C_UNK **func_0206040c(M2C_UNK **arg0) {
    *arg0 = &data_020f94dc;
    func_02060504();
    return arg0;
}
