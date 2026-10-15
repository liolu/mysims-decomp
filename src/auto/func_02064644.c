#include "m2c.h"

M2C_UNK func_02025274();                            /* extern */
M2C_UNK func_02025498();                            /* extern */
M2C_UNK func_020254e8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020633f8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02063ea0(s32);                         /* extern */
M2C_UNK func_02063eb8(s32);                         /* extern */
extern s32 data_02118998;

void func_02064644(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C0) == 0) {
        return;
    }
    func_02063ea0(data_02118998 + 0x15B0);
    func_02025274();
    func_020254e8(0x4A000, 0x4000, 0);
    func_020633f8(arg0 + 0x2C4, data_02118998 + 0x15B0, 0);
    func_02025498();
    func_02063eb8(data_02118998 + 0x15B0);
}
