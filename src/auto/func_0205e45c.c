#include "m2c.h"

s32 func_02042f80(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0205e43c();                                /* extern */
extern s32 data_021d8aa8;

s32 func_0205e45c(void) {
    s32 var_r0;

    if (data_021d8aa8 == 0) {
        var_r0 = func_02042f80(0x10, 0);
        if (var_r0 != 0) {
            var_r0 = func_0205e43c();
        }
        data_021d8aa8 = var_r0;
    }
    return data_021d8aa8;
}
