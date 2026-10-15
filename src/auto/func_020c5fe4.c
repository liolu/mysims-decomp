#include "m2c.h"

M2C_UNK func_02006000(u16);                         /* extern */
M2C_UNK func_020100a0(u16);                         /* extern */

void func_020c5fe4(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r1 == -3) {
        return;
    }
    func_020100a0((u16) temp_r1);
    func_02006000((u16) M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8) = -3;
}
