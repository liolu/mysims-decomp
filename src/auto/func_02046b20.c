#include "m2c.h"

void *func_02050ca4(u16, u16);                      /* extern */
s32 func_02050f14(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0206f920(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_02081dbc(void *, s32);                     /* extern */
extern void *data_02118998;

s32 func_02046b20(void *arg0, s32 arg1) {
    s32 temp_r8;
    s32 var_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD((data_02118998 + (arg1 * 4)), void **, 0x2450);
    var_r4  = 0;
    temp_r8 =
        M2C_FIELD(func_02050ca4((u16) M2C_FIELD(temp_r5, s32 *, 0x8E4), (u16) M2C_FIELD(temp_r5, s32 *, 0x8E8)), s32 *, 0x38);
    if ((temp_r5 != NULL) && (func_02050f14(temp_r5, 1) != 0)) {
        if (temp_r8 & 0x1000) {
            M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 2);
            if (func_02081dbc(data_02118998 + 0x380C, 0x10E) != 0) {
                func_0206f920(data_02118998 + 0x812C, 1, 0x20);
            }
        }
        M2C_FIELD(arg0, s32 *, 0xDBC) = arg1;
        var_r4                        = 1;
        M2C_FIELD(arg0, s32 *, 0xDB8) = 1;
    }
    return var_r4;
}
