#include "m2c.h"

s32 func_02051a04(void *);                          /* extern */

s32 func_02057928(s32 arg0, void *arg1) {
    if (func_02051a04(arg1) != 0) {
        return 0;
    }
    if (M2C_FIELD(arg1, s32 *, 0xE98) != 0) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 0x8FC) > 0) {
        return 1;
    }
    return 0;
}
