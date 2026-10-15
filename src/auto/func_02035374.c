#include "m2c.h"

M2C_UNK func_020353d0();                            /* extern */
M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d8c9c;

M2C_UNK **func_02035374(M2C_UNK **arg0) {
    *arg0 = &data_020d8c9c;
    func_020353d0();
    func_0204306c(arg0);
    return arg0;
}
