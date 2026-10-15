#include "m2c.h"

M2C_UNK func_0205558c(void *);                      /* extern */

void func_02043320(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x8CD) == 0) {
        return;
    }
    func_0205558c(arg0 + 0x8EC);
    M2C_FIELD(arg0, u8 *, 0x8CD) = 0U;
}
