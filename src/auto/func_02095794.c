#include "m2c.h"

M2C_UNK func_020448d8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
void *func_02048fd8(void *, s32);                   /* extern */
s32 func_02095838();                                /* extern */
extern void *data_02118998;

void func_02095794(void *arg0, s32 arg1) {
    void *temp_r0;

    if (func_02095838() == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x7C)     = arg1;
    M2C_FIELD(arg0, s32 *, 0xA0)     = 0;
    M2C_FIELD(arg0, s32 *, 0x9C)     = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 2);
    temp_r0                          = func_02048fd8(data_02118998 + 0x244C, M2C_FIELD(data_02118998, s32 *, 0x35D4));
    M2C_FIELD(temp_r0, s32 *, 0xDA8) = 0;
    M2C_FIELD(temp_r0, s32 *, 0xDB0) = 0;
    func_020448d8(temp_r0, 0, 0, 0x5000);
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x40);
    M2C_FIELD(arg0, s32 *, 0x9C)            = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 8);
}
