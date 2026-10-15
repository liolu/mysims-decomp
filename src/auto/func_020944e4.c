#include "m2c.h"

M2C_UNK func_02062b1c();                            /* extern */
extern s32 data_0211899c;

void func_020944e4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1100) = (s32) data_0211899c;
    func_02062b1c(arg0);
}
