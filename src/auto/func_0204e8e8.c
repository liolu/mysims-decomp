#include "m2c.h"

s32 func_02056018(void *);                          /* extern */
s32 func_020560b8(void *);                          /* extern */

s32 func_0204e8e8(void *arg0) {
    s32 temp_r4;
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1DDC) != 0) {
        temp_r4 = func_02056018(arg0 + 0x8EC);
        if (temp_r4 >= (s32) (func_020560b8(arg0 + 0x8EC) - 0x1000)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1DE4) <= 0) {
        return 1;
    }
    return 0;
}
