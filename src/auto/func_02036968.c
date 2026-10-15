#include "m2c.h"

M2C_UNK func_02034644(M2C_UNK **);                  /* extern */
M2C_UNK func_02036ad4();                            /* extern */
extern M2C_UNK data_020d8d0c;

M2C_UNK **func_02036968(M2C_UNK **arg0) {
    *arg0 = &data_020d8d0c;
    func_02036ad4();
    func_02034644(arg0);
    return arg0;
}
