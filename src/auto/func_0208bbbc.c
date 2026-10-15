#include "m2c.h"

M2C_UNK func_0206f6dc(void *, M2C_UNK);             /* extern */
s32 func_0208149c(void *);                          /* extern */
M2C_UNK func_0208151c(void *);                      /* extern */
M2C_UNK func_0208c1cc(void *);                      /* extern */
extern void *data_02118998;

s32 func_0208bbbc(void *arg0) {
    s32 var_r5;
    void *temp_r0;

    var_r5 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x14) == 0) && (func_0208149c(data_02118998 + 0x380C) != 0)) {
        M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x40);
        M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 1);
        M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 2);
        temp_r0                                 = data_02118998 + 0x812C;
        if (M2C_FIELD(temp_r0, s32 *, 0x150) != 0xF) {
            func_0206f6dc(temp_r0, 0);
        }
        M2C_FIELD(data_02118998, s8 *, 0x8289) = 0;
        M2C_FIELD(data_02118998, s8 *, 0x3CD9) = 1;
        func_0208c1cc(arg0);
        func_0208151c(data_02118998 + 0x380C);
        var_r5                      = 1;
        M2C_FIELD(arg0, u8 *, 0x14) = 1U;
    }
    return var_r5;
}
