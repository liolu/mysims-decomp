#include "m2c.h"

M2C_UNK func_0203865c(void *);                      /* extern */
M2C_UNK func_0203888c();                            /* extern */
M2C_UNK func_0204306c(void *);                      /* extern */
M2C_UNK func_0206054c(void *);                      /* extern */
extern M2C_UNK data_020d8f04;

void *func_02038570(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8f04;
    func_0203888c();
    func_0203865c(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    func_0206054c(arg0 + 0x18);
    func_0206054c(arg0 + 0xC);
    func_0204306c(arg0);
    return arg0;
}
