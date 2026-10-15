#include "m2c.h"

M2C_UNK func_02047b3c(s32, s32);                    /* extern */
M2C_UNK func_02047b84(s32);                         /* extern */
s32 func_02048fd8(void *, s32);                     /* extern */
M2C_UNK func_0207e108(s32, s32, s32, s32);          /* extern */
extern void *data_02118998;

void func_02075618(void *arg0) {
    s32 temp_r5;
    s32 var_r6;

    temp_r5 = func_02048fd8(data_02118998 + 0x244C, M2C_FIELD(data_02118998, s32 *, 0x35D4));
    if (M2C_FIELD(data_02118998, u8 *, 0x3CDA) != 0) {
        var_r6 = 0;
        do {
            func_02047b3c(temp_r5, var_r6);
            var_r6 += 1;
        } while (var_r6 < 5);
        func_02047b84(temp_r5);
    }
    func_0207e108(temp_r5, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
}
