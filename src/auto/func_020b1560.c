#include "m2c.h"

s32 func_020af3d0(M2C_UNK);                         /* extern */

void func_020b1560(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r2;
    u8 temp_r1;

    temp_r0 = func_020af3d0(arg1);
    temp_r2 = arg0 + 0x3348;
    temp_r1 = *(s8 *) (temp_r2 + temp_r0);
    if ((u32) temp_r1 < 0x63U) {
        *(s8 *) (temp_r2 + temp_r0) = temp_r1 + 1;
    }
}