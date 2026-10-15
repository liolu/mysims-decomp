#include "m2c.h"

s32 func_0200e6a0(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0200e8f0();                            /* extern */
extern M2C_UNK data_02108bac;
extern M2C_UNK func_0200e8e0;

s32 func_0200e758(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_0200e6a0(arg0, arg1, &func_0200e8e0, 0);
    M2C_FIELD(&data_02108bac, s32 *, 0x10) = temp_r0;
    if (temp_r0 == 0) {
        func_0200e8f0();
    }
    return M2C_FIELD(&data_02108bac, s32 *, 0x10);
}
