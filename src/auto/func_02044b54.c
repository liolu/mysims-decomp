#include "m2c.h"

M2C_UNK func_0202222c(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0204306c(void *);                      /* extern */
M2C_UNK func_020432a4(void *);                      /* extern */
M2C_UNK func_02054fbc(void *);                      /* extern */
extern M2C_UNK func_0206054c;

void *func_02044b54(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x1294);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0202222c(arg0 + 0x1200, 0xA, 0xC, &func_0206054c);
    func_02054fbc(arg0 + 0xFEC);
    func_02054fbc(arg0 + 0xDEC);
    func_020432a4(arg0);
    func_0204306c(arg0);
    return arg0;
}
