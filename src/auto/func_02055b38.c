#include "m2c.h"

s32 func_02042fd8(s32);                             /* extern */
M2C_UNK func_02055b70();                            /* extern */

void func_02055b38(void *arg0) {
    s32 temp_r0;

    func_02055b70();
    if (M2C_FIELD(arg0, u8 *, 0x104) == 0) {
        return;
    }
    temp_r0                       = func_02042fd8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x14C), u8 *, 0x17) * 0x58);
    M2C_FIELD(arg0, s32 *, 0x1F8) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0;
}
