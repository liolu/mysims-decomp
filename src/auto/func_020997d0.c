#include "m2c.h"

M2C_UNK func_02086c90(void *, u16);                 /* extern */

s32 func_020997d0(void *arg0) {
    s32 temp_r0;

    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
        return 0;
    }
    func_02086c90(arg0, (u16) (M2C_FIELD(arg0, u16 *, 0xE) + 1));
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0xA8) + 1;
    M2C_FIELD(arg0, s32 *, 0xA8) = temp_r0;
    if (temp_r0 <= 2) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & ~4);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    func_02086c90(arg0, M2C_FIELD(arg0, u16 *, 0xE));
    return 0;
}
