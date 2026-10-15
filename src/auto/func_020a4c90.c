#include "m2c.h"

M2C_UNK func_0205558c(void *);                      /* extern */

void func_020a4c90(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x11C) == 0) {
        return;
    }
    func_0205558c(arg0 + 0x18);
}
