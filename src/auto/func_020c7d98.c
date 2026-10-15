#include "m2c.h"

s32 func_020c7c58();                                /* extern */
M2C_UNK func_020c7ef4(M2C_UNK);                     /* extern */

s32 func_020c7d98(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020c7c58();
    if (temp_r0 == 0) {
        func_020c7ef4(arg0);
    }
    return temp_r0;
}
