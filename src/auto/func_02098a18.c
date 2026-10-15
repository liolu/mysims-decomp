#include "m2c.h"

M2C_UNK func_02002e70(M2C_UNK);                     /* extern */
M2C_UNK func_020033fc(M2C_UNK);                     /* extern */
M2C_UNK func_020036bc(M2C_UNK);                     /* extern */
M2C_UNK func_02003830(M2C_UNK);                     /* extern */
M2C_UNK func_02003c70();                            /* extern */

void func_02098a18(void *arg0) {
    u32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 4) == 0) {
        return;
    }
    temp_r0 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 0x18) & 7;
    switch (temp_r0) {
        default:
            break;
        case 1:
            func_02003c70();
            func_02002e70(8);
            break;
        case 2:
            func_02003c70();
            func_020036bc(8);
            break;
        case 3:
            func_02003c70();
            func_020033fc(8);
            break;
        case 4:
            func_02003c70();
            func_02003830(8);
            break;
    }
    M2C_FIELD(arg0, u8 *, 4) = 0U;
}
