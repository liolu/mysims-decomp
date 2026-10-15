#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
s32 func_020172a0();                                /* extern */
M2C_UNK func_020172e8(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_0210fb80;

void func_02017454(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200856c();
    if (func_020172a0() != 0) {
        func_020172e8(data_0210fb80 + 0xC4, 0, arg0, 0);
    }
    func_02008580(temp_r4);
}
