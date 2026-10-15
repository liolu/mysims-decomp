#include "m2c.h"

M2C_UNK func_020243e0(void *, M2C_UNK);                      /* extern */

void func_020634f8(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x74) == 0) {
        return;
    }
    func_020243e0(arg0 + 0x10, arg1);
}
