#include "m2c.h"

s32 func_020a1278();                                /* extern */
s32 func_020a1338();                                /* extern */

s32 func_020a1248(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0xAD) != 0) {
        return func_020a1278(arg0);
    }
    return func_020a1338(arg0);
}
