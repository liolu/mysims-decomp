#include "m2c.h"

M2C_UNK func_0203908c(void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_020bead8(void *arg0, void *arg1, void *arg2) {
    func_0203908c(arg1, 0, 0, 0x1CCD, (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u16 *, 0x99A));
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + M2C_FIELD(arg2, s32 *, 0));
    M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + M2C_FIELD(arg2, s32 *, 8));
}
