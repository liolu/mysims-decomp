#include "m2c.h"

M2C_UNK func_02009108(void *, void *, M2C_UNK);     /* extern */

void func_02098928(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    func_02009108(arg1 + 0x10, arg0 + 0x24, 0x3C);
}
