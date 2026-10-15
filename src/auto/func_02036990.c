#include "m2c.h"

M2C_UNK func_02034644(M2C_UNK **);                  /* extern */
M2C_UNK func_02036ad4();                            /* extern */
M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d8d0c;

M2C_UNK **func_02036990(M2C_UNK **arg0) {
    *arg0 = &data_020d8d0c;
    func_02036ad4();
    func_02034644(arg0);
    func_0204306c(arg0);
    return arg0;
}
