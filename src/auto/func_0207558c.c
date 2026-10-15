#include "m2c.h"

M2C_UNK func_02047b3c(s32, s32);                    /* extern */
M2C_UNK func_02047b84(s32);                         /* extern */
s32 func_02048fd8(void *, s32);                     /* extern */
s32 func_0207e070(s32, s32, s32, s32);              /* extern */
extern void *data_02118998;

s32 func_0207558c(void *arg0) {
    s32 temp_r6;
    s32 var_r4;
    s32 var_r7;

    var_r4  = 0;
    temp_r6 = func_02048fd8(data_02118998 + 0x244C, M2C_FIELD(data_02118998, s32 *, 0x35D4));
    if (M2C_FIELD(data_02118998, u8 *, 0x3CDA) != 0) {
        var_r7 = 0;
        do {
            func_02047b3c(temp_r6, var_r7);
            var_r7 += 1;
        } while (var_r7 < 5);
        func_02047b84(temp_r6);
    }
    if (temp_r6 != 0) {
        var_r4 = func_0207e070(temp_r6, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
    }
    return var_r4;
}
