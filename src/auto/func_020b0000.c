#include "m2c.h"

M2C_UNK func_02086cac();             /* extern */

s32 func_020b0000(void *arg0) {
    s32 temp_r0;

    func_02086cac(arg0, 1);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0xA8) + 1;
    M2C_FIELD(arg0, s32 *, 0xA8) = temp_r0;
    if (temp_r0 <= 2) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & ~4);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    func_02086cac(arg0);
    return 0;
}
