#include "m2c.h"

M2C_UNK func_0207095c();                            /* extern */
M2C_UNK func_02070ee4(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020fb378;

M2C_UNK **func_02070ea4(M2C_UNK **arg0) {
    *arg0 = &data_020fb378;
    func_0207095c();
    func_02070ee4(arg0);
    return arg0;
}
