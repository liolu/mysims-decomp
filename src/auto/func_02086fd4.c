#include "m2c.h"

M2C_UNK func_0208694c();                            /* extern */
extern M2C_UNK data_020fc954;

void *func_02086fd4(void *arg0) {
    func_0208694c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fc954;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    return arg0;
}
