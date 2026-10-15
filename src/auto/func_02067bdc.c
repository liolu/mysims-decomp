#include "m2c.h"

M2C_UNK func_02025274();                            /* extern */
M2C_UNK func_02025498();                            /* extern */
M2C_UNK func_020254e8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020633f8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02063ea0(s32);                         /* extern */
M2C_UNK func_02063eb8(s32);                         /* extern */
extern s32 data_02118998;

void func_02067bdc(void *arg0) {
    s32 var_r7;
    void *var_r8;
    void *var_r9;

    if (data_02118998 == 0) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x148) <= 1) {
        return;
    }
    func_02063ea0(data_02118998 + 0x15B0);
    var_r7 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x144) > 0) {
        var_r8 = arg0;
        var_r9 = arg0 + 0x724;
        do {
            if ((s32) M2C_FIELD(var_r8, s32 *, 8) < 0xF0000) {
                func_02025274();
                func_020254e8(M2C_FIELD(var_r8, s32 *, 4), M2C_FIELD(var_r8, s32 *, 8), 0);
                func_020633f8(var_r9, data_02118998 + 0x15B0, 0);
                func_02025498();
            }
            var_r7 += 1;
            var_r8 += 0x18;
            var_r9 += 0x78;
        } while (var_r7 < (s32) M2C_FIELD(arg0, s32 *, 0x144));
    }
    func_02063eb8(data_02118998 + 0x15B0);
}
