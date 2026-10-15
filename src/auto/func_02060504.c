#include "m2c.h"

M2C_UNK func_0200663c(void *, void *);              /* extern */

void func_02060504(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return;
    }
    func_0200663c(arg0 + 8, arg0);
    M2C_FIELD(arg0, u8 *, 4) = 0U;
}
