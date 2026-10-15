#include "m2c.h"

M2C_UNK func_0203901c(void *, M2C_UNK);                      /* extern */

void func_0204498c(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x8CD) == 0) {
        return;
    }
    func_0203901c(arg0 + 0xA30, arg1);
}
