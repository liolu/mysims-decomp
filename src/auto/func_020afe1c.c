#include "m2c.h"

s32 func_020afe74();                                /* extern */
s32 func_020aff34();                                /* extern */
s32 func_020afff4();                                /* extern */
s32 func_020b0000();                                /* extern */

s32 func_020afe1c(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
        return func_020afe74(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xB8) != 0) {
        return func_020aff34(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xAD) != 0) {
        return func_020afff4(arg0);
    }
    return func_020b0000(arg0);
}
