#include "m2c.h"

s32 func_0200f4e8(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0200fc0c();                            /* extern */
extern M2C_UNK data_02108c34;
extern M2C_UNK func_0200fbfc;

s32 func_0200f558(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_0200f4e8(arg0, &func_0200fbfc, 0);
    M2C_FIELD(&data_02108c34, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_0200fc0c();
    }
    return M2C_FIELD(&data_02108c34, s32 *, 0x24);
}
