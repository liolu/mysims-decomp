#include "m2c.h"

M2C_UNK func_0204314c();                            /* extern */
M2C_UNK func_0204f918(s32);                         /* extern */
extern M2C_UNK data_020d9964;

void *func_02050b8c(void *arg0) {
    func_0204314c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d9964;
    func_0204f918(arg0 + 0xDCC);
    M2C_FIELD(arg0, s8 *, 0xE9D) = 0;
    M2C_FIELD(arg0, s8 *, 0xE9E) = 0;
    return arg0;
}
