#include "m2c.h"

M2C_UNK func_02002cd0(M2C_UNK);                     /* extern */

void func_020b7314(void) {
    func_02002cd0(0);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) =
        (s32) ((M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & 0xFFCFFFEF) | 0x100010);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) =
        (s32) ((M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & ~0x1F00) | 0x1F00);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) = (s32) (M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & ~0xE000);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) & 0x43);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) = (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) & ~3) | 3);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) & ~0x40);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0x10) = 0;
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xA) =
        (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xA) & 0x43) | 0x100);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xA) =
        (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xA) & ~3) | 2);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xA)  = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xA) & ~0x40);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xC) =
        (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xC) & 0x43) | 0x200);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xC) =
        (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xC) & ~3) | 1);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xC)  = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xC) & ~0x40);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0x18) = 0;
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) =
        (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & 0x43) | 0x304);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE)  = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & ~3);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE)  = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & ~0x40);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0x1C) = 0;
    M2C_FIELD((void *) 0x04001000, volatile s16 *, 0x50) = 0;
}
