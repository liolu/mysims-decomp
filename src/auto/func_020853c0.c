#include "m2c.h"

extern void *data_02118998;
extern s32 data_0211899c;

void func_020853c0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4)               = arg1;
    M2C_FIELD(arg0, s32 *, 8)               = 0;
    M2C_FIELD(arg0, s32 *, 0xC)             = (s32) (data_0211899c * 3);
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x40);
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 2);
}
