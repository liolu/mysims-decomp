#include "m2c.h"

void func_0205f44c(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x188);
    switch (temp_r1) {
        default:
        /* fallthrough */
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            M2C_FIELD(arg0, s32 *, 0x190) = 1;
            return;
        case 0:
        case 7:
            M2C_FIELD(arg0, s32 *, 0x190) = 2;
            return;
    }
}
