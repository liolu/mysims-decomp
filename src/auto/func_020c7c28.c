#include "m2c.h"

M2C_UNK func_020c5e00(s32, u16, u8, s32);           /* extern */

void func_020c7c28(void *arg0) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x92);
    func_020c5e00(M2C_FIELD(arg0, s32 *, 0xA0), M2C_FIELD(arg0, u16 *, 0x90), temp_r2,
                  (temp_r2 * 0x820) + M2C_FIELD(arg0, s32 *, 0x88));
    M2C_FIELD(arg0, s8 *, 0x93) = 0;
}
