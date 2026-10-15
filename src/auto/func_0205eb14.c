#include "m2c.h"

void *func_020603dc(s32);                           /* extern */
s32 func_020603ec();                                /* extern */

s32 func_0205eb14(s32 arg0, s32 arg1) {
    if (arg1 == -1) {
        return -1;
    }
    if (func_020603ec() < arg1) {
        return -1;
    }
    return M2C_FIELD(func_020603dc(arg1), s32 *, 4);
}
