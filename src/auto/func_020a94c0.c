#include "m2c.h"

M2C_UNK func_0208694c();                            /* extern */
extern M2C_UNK data_020ff430;

void *func_020a94c0(void *arg0) {
    func_0208694c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ff430;
    M2C_FIELD(arg0, s32 *, 4)      = 6;
    M2C_FIELD(arg0, s8 *, 0xB4)    = 0;
    return arg0;
}
