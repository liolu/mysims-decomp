#include "m2c.h"

M2C_UNK func_02038fe0();                            /* extern */

void func_02038f48(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x5C) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x5C) = 0U;
    func_02038fe0();
}
