#include "m2c.h"

M2C_UNK func_02034d20();                            /* extern */
M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d8c78;

M2C_UNK **func_02034cd8(M2C_UNK **arg0) {
    *arg0 = &data_020d8c78;
    func_02034d20();
    func_0204306c(arg0);
    return arg0;
}
