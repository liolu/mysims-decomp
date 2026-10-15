#include "m2c.h"

M2C_UNK func_020634f8(void *, M2C_UNK);                      /* extern */

void func_020bf734(void *arg0, void *arg1) {
    if (!(M2C_FIELD(arg0, s32 *, 0x10) & 1)) {
        return;
    }
    func_020634f8(arg0 + 0x14, arg1);
}
