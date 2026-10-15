#include "m2c.h"

M2C_UNK func_02009ef0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200a4c0(M2C_UNK);                     /* extern */
M2C_UNK func_0200a67c(s32);                         /* extern */
s32 func_0200a6e8();                                /* extern */
M2C_UNK func_0202fd3c();                            /* extern */

void func_0202eaf4(void) {
    s32 temp_r4;

    func_0202fd3c();
    func_02009ef0(0, 0, 0, 0);
    temp_r4 = func_0200a6e8();
    func_0200a4c0(1);
    func_0200a67c(temp_r4);
}
