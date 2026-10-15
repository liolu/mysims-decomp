#include "m2c.h"

M2C_UNK func_02038c84(void *);                      /* extern */
M2C_UNK func_0204306c(void *);                      /* extern */
M2C_UNK func_02056650();                            /* extern */
M2C_UNK func_0206054c(void *);                      /* extern */
extern M2C_UNK data_020dd9b8;

void *func_02056548(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dd9b8;
    if (M2C_FIELD(arg0, u8 *, 0x38) != 0) {
        func_02056650(arg0);
    }
    func_02038c84(arg0 + 0x1C);
    func_0206054c(arg0 + 0xC);
    func_0204306c(arg0);
    return arg0;
}
