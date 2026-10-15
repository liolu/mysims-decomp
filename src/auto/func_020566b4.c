#include "m2c.h"

M2C_UNK func_02038d60(void *);                      /* extern */

void func_020566b4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x39) == 0) {
        return;
    }
    func_02038d60(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, u8 *, 0x39)  = 0U;
}
