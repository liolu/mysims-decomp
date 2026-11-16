/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

s32 func_0204ecbc(void *, M2C_UNK, M2C_UNK);        /* extern */

void func_0204ed54(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1DE0) <= 0) {
        if (M2C_FIELD(arg0, s32 *, 0x1DA0) == 1) {
            M2C_FIELD(arg0, s32 *, 0x1DE0) = func_0204ecbc(arg0, 4, 5);
        } else {
            M2C_FIELD(arg0, s32 *, 0x1DE0) = func_0204ecbc(arg0, 4, 0xA);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1DF0) = 0;
}
