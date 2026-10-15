#include "m2c.h"

M2C_UNK func_02025274();                            /* extern */
M2C_UNK func_02025498();                            /* extern */
M2C_UNK func_020254e8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020633f8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02063ea0(s32);                         /* extern */
M2C_UNK func_02063eb8(s32);                         /* extern */
extern s32 data_02118998;

void func_020be5b4(s32 arg0) {
    func_02063ea0(data_02118998 + 0x164C);
    func_02025274();
    func_020254e8(0x80000, 0x60000, 0);
    func_020633f8(arg0 + 0x948, data_02118998 + 0x164C, 0);
    func_02025498();
    func_02063eb8(data_02118998 + 0x164C);
}
