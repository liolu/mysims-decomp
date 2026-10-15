#include "m2c.h"

M2C_UNK func_02002cd0(M2C_UNK);                     /* extern */

void func_02037384(void) {
    func_02002cd0(0);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) = (s32) (M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & ~0xE000);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) =
        (s32) ((M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & ~0x1F00) | 0x800);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & 0x43);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) =
        (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & ~3) | 3);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE)  = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & ~0x40);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0x1C) = 0;
    M2C_FIELD((void *) 0x04001000, volatile s16 *, 0x50) = 0;
}
