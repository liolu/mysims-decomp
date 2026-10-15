#include "m2c.h"

s32 func_02086ac8();                                /* extern */
M2C_UNK func_020a954c();                            /* extern */
M2C_UNK func_020a95a8();                            /* extern */

s32 func_020a9504(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0xAD) != 0) {
        return func_02086ac8(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xB4) != 0) {
        func_020a95a8(arg0);
    } else {
        func_020a954c(arg0);
    }
    return 1;
}
