#include "m2c.h"

M2C_UNK func_0206353c(void *);                      /* extern */

void func_0209cab0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) M2C_FIELD(arg1, u16 *, 0xE);
    func_0206353c(arg0 + 0x30);
    M2C_FIELD(arg0, u16 *, 0xE)  = (u16) M2C_FIELD(arg1, u16 *, 0xE);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) - 0x4000);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 0x8000);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 0x4000);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) - 0x8000);
    M2C_FIELD(arg0, s8 *, 0x2C)  = 1;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 1;
    M2C_FIELD(arg0, u16 *, 0xB4) = (u16) M2C_FIELD(arg1, u16 *, 0xB4);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg1, s32 *, 0xB8);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg1, s32 *, 0xBC);
}
