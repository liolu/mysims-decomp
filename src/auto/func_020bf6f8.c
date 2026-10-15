#include "m2c.h"

M2C_UNK func_02025274();                            /* extern */
M2C_UNK func_02025498();                            /* extern */
M2C_UNK func_020254e8(s32, s32, s32);               /* extern */
M2C_UNK func_020633f8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020bf6f8(void *arg0, M2C_UNK arg1) {
    if (!(M2C_FIELD(arg0, s32 *, 0x10) & 1)) {
        return;
    }
    func_02025274();
    func_020254e8(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
    func_020633f8(arg0 + 0x14, arg1, 0);
    func_02025498();
}
