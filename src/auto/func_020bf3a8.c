#include "m2c.h"

M2C_UNK func_0205ecec(s32);                         /* extern */
M2C_UNK func_0205fc08(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_020bf3a8(void *arg0) {
    func_0205ecec(M2C_FIELD(arg0, s32 *, 0xC));
    func_0205fc08(M2C_FIELD(arg0, s32 *, 0xC), 0x18, 0x25, 0x80, 0x5A, 0, 1);
    func_0205fc08(M2C_FIELD(arg0, s32 *, 0xC), 0x18, 0x26, 0x80, 0x92, 0, 1);
}
