#include "m2c.h"

M2C_UNK func_02060e40();                            /* extern */
extern M2C_UNK data_020f94fc;

M2C_UNK **func_02060c20(M2C_UNK **arg0) {
    *arg0 = &data_020f94fc;
    func_02060e40();
    return arg0;
}
