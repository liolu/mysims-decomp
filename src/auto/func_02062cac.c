#include "m2c.h"

M2C_UNK func_02034ae0();                            /* extern */

void func_02062cac(void *arg0) {
    func_02034ae0();
    M2C_FIELD(arg0, s32 *, 0x1104) = (s32) (M2C_FIELD(arg0, s32 *, 0x1104) + 1);
}
