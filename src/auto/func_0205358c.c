#include "m2c.h"

M2C_UNK func_020535c0(M2C_UNK, M2C_UNK, M2C_UNK, u16, s32, s32); /* extern */
extern s32 data_02118998;

void func_0205358c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    void *temp_lr;

    temp_lr = data_02118998 + 0x27C0;
    func_020535c0(arg0, arg1, arg2, M2C_FIELD(temp_lr, u16 *, 0x10), (s32) M2C_FIELD(temp_lr, u16 *, 0x12), arg3);
}
