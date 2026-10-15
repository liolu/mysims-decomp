#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
M2C_UNK func_020155d4(M2C_UNK);                     /* extern */
s32 func_02016b38();                                /* extern */
s32 func_020172a0();                                /* extern */
M2C_UNK func_02017454(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210fb40;
extern M2C_UNK func_02016b70;

s32 func_02016b7c(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_0200856c();
    if (M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), u8 *, 0x50D) == 0) {
        func_020155d4(0);
    } else if (M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), u16 *, 0x526) == 0) {
        M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s32 *, 0x5E4) = 0;
        M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), u16 *, 0x526) = 1U;
        if (func_020172a0() != 0) {
            func_02017454(&func_02016b70);
            var_r5 = 0;
        } else {
            var_r5 = func_02016b38();
        }
    }
    func_02008580(temp_r4);
    return var_r5;
}
