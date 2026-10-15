#include "m2c.h"

M2C_UNK func_02025274();                            /* extern */
M2C_UNK func_02025498();                            /* extern */
M2C_UNK func_020254e8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020633f8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02063514(void *, void *, void *, s32); /* extern */
M2C_UNK func_02063ea0(s32);                         /* extern */
M2C_UNK func_02063eb8(s32);                         /* extern */
extern s32 data_02118998;

void func_020bdb84(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s8 *, 0x2A7) < 0) {
        return;
    }
    func_02063ea0(data_02118998 + 0x15B0);
    func_02025274();
    func_020254e8(0x70000, 0x2C000, 0);
    func_02063514(arg0 + 0x384, arg0 + 0x354, arg0 + 0x36C, 0);
    func_020633f8(arg0 + 0x384, data_02118998 + 0x15B0, 0);
    func_02025498();
    func_02025274();
    func_020254e8(0xA4000, 0x2D000, 0);
    func_02063514(arg0 + 0x384, arg0 + 0x354, arg0 + 0x36C, M2C_FIELD(arg0, s8 *, 0x2A7) + 1);
    func_020633f8(arg0 + 0x384, data_02118998 + 0x15B0, 0);
    func_02025498();
    func_02063eb8(data_02118998 + 0x15B0);
}
