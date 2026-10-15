#include "m2c.h"

M2C_UNK func_02007860(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
s32 func_020177e8();                                /* extern */
extern s32 data_0210fb98;

void func_02017a80(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_0200856c();
    data_0210fb98 = arg0;
    if (func_020177e8() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_02007860(0xF000, var_r1);
    }
    func_02008580(temp_r4);
}
