#include "m2c.h"

s32 func_02086ac8();                                /* extern */
s32 func_0208fe50();                                /* extern */
s32 func_0208fee4();                                /* extern */
s32 func_0208ff78();                                /* extern */

s32 func_0208fdf8(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0xAD) != 0) {
        return func_02086ac8(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xBC) != 0) {
        return func_0208ff78(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xB4) != 0) {
        return func_0208fee4(arg0);
    }
    return func_0208fe50(arg0);
}
