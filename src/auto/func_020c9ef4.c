#include "m2c.h"

M2C_UNK func_020c9ed8();                            /* extern */
extern M2C_UNK data_02104b6c;

void *func_020c9ef4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104b6c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    func_020c9ed8(arg0);
    return arg0;
}
