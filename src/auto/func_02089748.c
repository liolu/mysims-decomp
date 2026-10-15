#include "m2c.h"

M2C_UNK func_02089788(void *, s32, s32);            /* extern */

void func_02089748(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4318), s32 *, 0x8F8) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4318), s32 *, 0x8FC) = arg2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4318), s32 *, 0x900) = arg3;
    func_02089788(arg0, arg1, arg2 + 0x2000);
}
