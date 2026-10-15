#include "m2c.h"

M2C_UNK func_02009168(s32, s32, s32);               /* extern */
s32 func_0205ec90();                                /* extern */

void func_0205ecc0(void *arg0) {
    func_02009168(func_0205ec90() * 0x10001, M2C_FIELD(arg0, s32 *, 0xC0), M2C_FIELD(arg0, s32 *, 0xC4));
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) | 0x20000);
}
