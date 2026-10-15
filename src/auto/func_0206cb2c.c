#include "m2c.h"

M2C_UNK func_020346a4(s32, void *);                 /* extern */
M2C_UNK func_02060604(void *);                      /* extern */

void func_0206cb2c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0x1A6) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398);
    if (temp_r0 != 0) {
        func_020346a4(temp_r0, arg0 + 0x468);
        func_020346a4(M2C_FIELD(arg0, s32 *, 0x398), arg0 + 0x4A0);
        func_020346a4(M2C_FIELD(arg0, s32 *, 0x398), arg0 + 0x4C0);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x39C);
    if (temp_r0_2 != 0) {
        func_020346a4(temp_r0_2, arg0 + 0x488);
    }
    func_02060604(arg0 + 0x6D8);
    func_02060604(arg0 + 0x6E4);
    M2C_FIELD(arg0, u8 *, 0x1A6) = 0U;
}
