#include "m2c.h"

s32 func_02030890();                                /* extern */

s32 func_02030878(void) {
    if (func_02030890() == 0) {
        return 1;
    }
    return 0;
}
