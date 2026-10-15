#include "m2c.h"

M2C_UNK func_020039d4();                            /* extern */
M2C_UNK func_02003a30();                            /* extern */
M2C_UNK func_02003a58();                            /* extern */
M2C_UNK func_02003a6c();                            /* extern */

void func_020989a0(void *arg0) {
    u32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, u32 *, 8) = (u32) * (u32 *) 0x04000240;
    temp_r0                   = ((u32) * (u32 *) 0x04000240 >> 0x18) & 7;
    switch (temp_r0) {
        default:
            break;
        case 1:
            func_020039d4();
            break;
        case 2:
            func_02003a58();
            break;
        case 3:
            func_02003a30();
            break;
        case 4:
            func_02003a6c();
            break;
    }
    M2C_FIELD(arg0, u8 *, 4) = 1U;
}
