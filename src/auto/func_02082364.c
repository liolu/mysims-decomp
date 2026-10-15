#include "m2c.h"

M2C_UNK func_020713f4(M2C_UNK *, s32);              /* extern */
void *func_020713fc(M2C_UNK *, u16);                /* extern */
extern s32 data_02118994;
extern void *data_02118998;

s32 func_02082364(s32 arg0, u16 arg1) {
    M2C_UNK sp0;
    s32 var_r4;
    u16 var_r5;

    var_r5 = arg1;
    var_r4 = 0;
    func_020713f4(&sp0, data_02118994 + 0x390C);
    if (var_r5 == 0) {
        var_r5 = M2C_FIELD(data_02118998, u16 *, 0x27D0);
    }
    if ((u32) M2C_FIELD(func_020713fc(&sp0, var_r5), u16 *, 4) < 0x14U) {
        M2C_FIELD(func_020713fc(&sp0, var_r5), s16 *, 4) = 0x14;
        var_r4                                           = 1;
    }
    return var_r4;
}
