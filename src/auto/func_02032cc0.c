#include "m2c.h"

M2C_UNK func_02009308(s32, s32, M2C_UNK);           /* extern */
s32 func_020304a4(M2C_UNK);                         /* extern */

s32 func_02032cc0(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                      = func_020304a4(arg1);
    M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0;
    func_02009308(temp_r0, arg0 + 0xA8, 0x40);
    return 1;
}
