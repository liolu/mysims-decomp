#include "m2c.h"

M2C_UNK func_0200467c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02004748(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_02004870(M2C_UNK);                     /* extern */
M2C_UNK func_0202a788();                            /* extern */
M2C_UNK func_0203665c(s32);                         /* extern */
extern M2C_UNK data_021116b8;

void func_020366e0(s32 arg0) {
    func_0202a788();
    M2C_FIELD((void *) 0x04000008, u16 *, 0)    = (u16) ((M2C_FIELD((void *) 0x04000008, u16 *, 0) & ~3) | 3);
    M2C_FIELD((void *) 0x04000008, u16 *, 0x58) = (u16) (M2C_FIELD((void *) 0x04000008, u16 *, 0x58) & 0xCFFB);
    M2C_FIELD((void *) 0x04000008, u16 *, 0x58) = (u16) ((M2C_FIELD((void *) 0x04000008, u16 *, 0x58) & ~0x3000) | 8);
    M2C_FIELD((void *) 0x04000008, u16 *, 0x58) = (u16) ((M2C_FIELD((void *) 0x04000008, u16 *, 0x58) & ~0x3000) | 0x10);
    M2C_FIELD((void *) 0x04000008, u16 *, 0x58) = (u16) (M2C_FIELD((void *) 0x04000008, u16 *, 0x58) & 0xCFDF);
    func_0200467c(0, 0, 0, 0);
    func_02004870(0);
    func_02004748(0, 0x1F, 0x7FFF, 0x3F, 0);
    M2C_FIELD(&data_021116b8, s32 *, 0xA0) = 0xBFFF0000;
    func_0203665c(arg0 + 4);
}
