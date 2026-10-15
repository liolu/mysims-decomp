#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
M2C_UNK func_020226f8(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02117a3c;

void func_02032008(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200856c();
    func_020226f8(&data_02117a3c, arg0);
    func_02008580(temp_r4);
}
