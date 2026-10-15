#include "m2c.h"

s32 func_0202ad84();                                /* extern */

s32 func_0203899c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        return 0;
    }
    return func_0202ad84();
}
