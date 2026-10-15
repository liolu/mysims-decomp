#include "m2c.h"

s32 func_0200a764();                                /* extern */
s32 func_0200a7a0();                                /* extern */

s32 func_0200a7dc(void) {
    s32 temp_r4;

    temp_r4 = func_0200a764();
    return (0x100 - temp_r4) - func_0200a7a0();
}
