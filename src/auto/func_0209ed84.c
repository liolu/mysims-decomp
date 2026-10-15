#include "m2c.h"

M2C_UNK func_0209edc4(void *, s32, s32);            /* extern */

void func_0209ed84(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x6ED8), s32 *, 0x8F8) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x6ED8), s32 *, 0x8FC) = arg2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x6ED8), s32 *, 0x900) = arg3;
    func_0209edc4(arg0, arg1, arg2 + 0x2000);
}
