#include "m2c.h"

s32 func_02084014(s32);                             /* extern */

s32 func_020849d8(void *arg0) {
    if (func_02084014(M2C_FIELD(arg0, s32 *, 0xDCC)) == 0) {
        return 1;
    }
    return 0;
}
