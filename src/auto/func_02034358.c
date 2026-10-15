#include "m2c.h"

s32 func_02034358(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {                              /* irregular */
        case 0:
            return 0x20;
        case 1:
            return 0x20;
        case 6:
            return 0x200;
        default:
            return 0x200;
    }
}
