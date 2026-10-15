#include "m2c.h"

M2C_UNK func_02038f94(s32, void *);                 /* extern */
M2C_UNK func_0206054c(void *);                      /* extern */
extern M2C_UNK data_020d8f24;

void *func_02038c84(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8f24;
    temp_r0                        = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r0 != 0) {
        func_02038f94(temp_r0, arg0);
    }
    func_0206054c(arg0 + 4);
    return arg0;
}
