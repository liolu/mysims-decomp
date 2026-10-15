#include "m2c.h"

M2C_UNK func_02034ae0();                            /* extern */

void func_02038070(void *arg0) {
    func_02034ae0();
    M2C_FIELD(arg0, s32 *, 0x15AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x15AC) + 1);
}
