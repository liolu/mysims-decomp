#include "m2c.h"

M2C_UNK func_02018160();                            /* extern */
M2C_UNK func_0204306c(void *);                      /* extern */
extern M2C_UNK data_020d8b5c;

void *func_020330ac(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8b5c;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_02018160();
    }
    func_0204306c(arg0);
    return arg0;
}
