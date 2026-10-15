#include "m2c.h"

M2C_UNK func_02005a14(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02005be4(M2C_UNK);                     /* extern */
M2C_UNK func_02007a60(M2C_UNK);                     /* extern */
extern M2C_UNK data_02106e80;
extern M2C_UNK func_02007af4;

void func_02007a7c(void) {
    if (M2C_FIELD(&data_02106e80, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02106e80, u16 *, 0) = 1U;
    func_02007a60(0);
    M2C_FIELD(&data_02106e80, s32 *, 8)       = 0;
    M2C_FIELD(&data_02106e80, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_02005a14(8, &func_02007af4);
    func_02005be4(8);
    M2C_FIELD(&data_02106e80, s32 *, 4) = 0;
}
