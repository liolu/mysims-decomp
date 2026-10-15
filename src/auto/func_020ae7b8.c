#include "m2c.h"

M2C_UNK func_020ae760();                            /* extern */
extern M2C_UNK data_020ffc28;

M2C_UNK **func_020ae7b8(M2C_UNK **arg0) {
    *arg0 = &data_020ffc28;
    func_020ae760();
    return arg0;
}
