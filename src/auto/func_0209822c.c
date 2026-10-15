#include "m2c.h"

M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
M2C_UNK func_020981a0();                            /* extern */
extern M2C_UNK data_020fe3a0;

M2C_UNK **func_0209822c(M2C_UNK **arg0) {
    *arg0 = &data_020fe3a0;
    func_020981a0();
    func_0204306c(arg0);
    return arg0;
}
