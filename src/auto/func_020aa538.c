#include "m2c.h"

M2C_UNK func_02002cd0(M2C_UNK);                     /* extern */
M2C_UNK func_0202508c(void *, void *);              /* extern */
M2C_UNK func_02063e6c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02095164(void *);                      /* extern */

void func_020aa538(void *arg0) {
    func_02063e6c(arg0 + 0x16C4, 0, 0, 0x100000, 0xC0000);
    M2C_FIELD(arg0, volatile s32 *, 0x16D8) = 2;
    func_02095164(arg0);
    M2C_FIELD(arg0, volatile s32 *, 0x16F8) = 0;
    func_0202508c(arg0 + 0x15E0, arg0 + 0x16C4);
    M2C_FIELD(arg0, volatile s32 *, 0x1660) = -0x1000;
    func_02002cd0(0);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) =
        (s32) ((M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & 0xFFCFFFEF) | 0x100010);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) =
        (s32) ((M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & ~0x1F00) | 0x1900);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) = (s32) (M2C_FIELD((void *) 0x04001000, volatile s32 *, 0) & ~0xE000);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) & 0x43);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) = (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) & ~3) | 1);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 8) & ~0x40);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0x10) = 0;
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) =
        (u16) ((M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & 0x43) | 0x104);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE)  = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & ~3);
    M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE)  = (u16) (M2C_FIELD((void *) 0x04001000, volatile u16 *, 0xE) & ~0x40);
    M2C_FIELD((void *) 0x04001000, volatile s32 *, 0x1C) = 0;
    M2C_FIELD((void *) 0x04001000, volatile s16 *, 0x50) = 0;
}
