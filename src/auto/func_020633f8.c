#include "m2c.h"

M2C_UNK func_0202520c(void *);                      /* extern */
M2C_UNK func_02063ed4(void *, s32, s32, M2C_UNK);   /* extern */

void func_020633f8(void *arg0, void *arg1, M2C_UNK arg2) {
    s32 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x74) == 0) {
        return;
    }
    func_02063ed4(arg1, M2C_FIELD(arg0, s32 *, 0x6C), M2C_FIELD(arg0, s32 *, 0x70), arg2);
    M2C_FIELD(arg1, s32 *, 0x84) = (s32) (M2C_FIELD(arg1, s32 *, 0x84) | 1);
    M2C_FIELD(arg1, s16 *, 0x88) = (s16) M2C_FIELD(arg0, u8 *, 0x75);
    M2C_FIELD(arg1, s32 *, 0x84) = (s32) (M2C_FIELD(arg1, s32 *, 0x84) | 8);
    if (M2C_FIELD(arg0, u8 *, 0x76) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg1, s32 *, 0x8C) = var_r1;
    func_0202520c(arg0 + 0x10);
}
