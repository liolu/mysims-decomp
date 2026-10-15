#include "m2c.h"

M2C_UNK func_0208694c();                            /* extern */
extern M2C_UNK data_020ff148;

void *func_020a504c(void *arg0) {
    func_0208694c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ff148;
    M2C_FIELD(arg0, s32 *, 4)      = 7;
    return arg0;
}
