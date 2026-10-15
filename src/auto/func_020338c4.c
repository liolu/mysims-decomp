#include "m2c.h"

M2C_UNK func_02008a14(M2C_UNK, s32, s32, s32);      /* extern */
M2C_UNK func_020338a8();                            /* extern */

s32 func_020338c4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_020338a8(arg0);
    }
    func_02008a14(3, M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x18));
    return 0;
}
