#include "m2c.h"

M2C_UNK func_0206ce10(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206f190(void *);                      /* extern */

void func_0206bb70(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x394) != 0) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0;
    }
    func_0206ce10(arg0, 1);
    func_0206f190(arg0);
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0;
    M2C_FIELD(arg0, s32 *, 0x39C) = 0;
    M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0;
}
