#include "m2c.h"

M2C_UNK func_02034580(M2C_UNK **);                  /* extern */
M2C_UNK func_0203466c();                            /* extern */
extern M2C_UNK data_020d8c08;

M2C_UNK **func_02034644(M2C_UNK **arg0) {
    *arg0 = &data_020d8c08;
    func_0203466c();
    func_02034580(arg0);
    return arg0;
}
