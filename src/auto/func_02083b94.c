#include "m2c.h"

s32 func_02060b38(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02083c64();                            /* extern */

void func_02083b94(void *arg0, M2C_UNK arg1) {
    func_02083c64();
    if (func_02060b38(arg0 + 4, arg1, 0) == 0) {
        M2C_FIELD(arg0, volatile s8 *, 0x18) = 0;
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) M2C_FIELD(arg0, volatile s32 *, 8);
    M2C_FIELD(arg0, volatile s8 *, 0x18)  = 1;
}
