#include "m2c.h"

M2C_UNK func_020438c8();                            /* extern */

void func_020457c4(void *arg0) {
    func_020438c8();
    if ((M2C_FIELD(arg0, u8 *, 0x9F0) != 0) && (M2C_FIELD(arg0, s32 *, 0xAE4) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xA34) = (s32) (M2C_FIELD(arg0, s32 *, 0xA34) | 1);
    }
}
