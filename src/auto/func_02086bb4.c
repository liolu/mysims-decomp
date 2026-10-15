#include "m2c.h"

M2C_UNK func_02025274();                            /* extern */
M2C_UNK func_02025498();                            /* extern */
M2C_UNK func_020254e8(s32, s32, s32);               /* extern */
M2C_UNK func_02025648(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020633f8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02086bb4(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    func_02025274();
    func_020254e8(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r0 != 0x1000) {
        func_02025648(temp_r0, temp_r0, 0x1000);
    }
    func_020633f8(arg0 + 0x30, arg1, 0);
    func_02025498();
}
