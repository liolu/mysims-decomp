#include "m2c.h"

s32 func_0208c378();                                /* extern */
s32 func_0208c3f4();                                /* extern */

s32 func_0208c348(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0xB5) != 0) {
        return func_0208c3f4(arg0);
    }
    return func_0208c378(arg0);
}
