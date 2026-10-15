#include "m2c.h"

s32 func_020115ec();                                /* extern */

u16 func_02011e3c(void) {
    if (func_020115ec() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
