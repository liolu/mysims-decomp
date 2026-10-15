#include "m2c.h"

s32 func_0202ad74();                                /* extern */

s32 func_02038bf8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return 0;
    }
    return func_0202ad74();
}
