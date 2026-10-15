#include "m2c.h"

extern void *data_02118998;

void func_02095b5c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x9C)            = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) & ~2);
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) & ~0x40);
    M2C_FIELD(arg0, s32 *, 0x9C)            = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) & ~8);
}
