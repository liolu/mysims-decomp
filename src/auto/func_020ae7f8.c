#include "m2c.h"

M2C_UNK func_0204306c(M2C_UNK **);                  /* extern */
M2C_UNK func_020aef04();                            /* extern */
extern M2C_UNK data_020ffc28;

M2C_UNK **func_020ae7f8(M2C_UNK **arg0) {
    *arg0 = &data_020ffc28;
    func_020aef04();
    func_0204306c(arg0);
    return arg0;
}
