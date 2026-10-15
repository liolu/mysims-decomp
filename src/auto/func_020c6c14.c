#include "m2c.h"

M2C_UNK func_0205b3a0();                            /* extern */
M2C_UNK func_02060530(s32, M2C_UNK);                /* extern */
M2C_UNK func_020c6e78(s32);                         /* extern */

void *func_020c6c14(void *arg0) {
    func_0205b3a0();
    func_02060530(arg0 + 0xA0, 0);
    func_02060530(arg0 + 0xAC, 0);
    func_020c6e78(arg0 + 0xC8);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    return arg0;
}
