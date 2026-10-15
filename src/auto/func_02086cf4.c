#include "m2c.h"

M2C_UNK func_02086c90(void *, u16);                 /* extern */

void func_02086cf4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & ~4);
    M2C_FIELD(arg0, s32 *, 0x10) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    func_02086c90(arg0, M2C_FIELD(arg0, u16 *, 0xE));
}
