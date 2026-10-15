#include "m2c.h"

M2C_UNK func_0200e944();                            /* extern */
s32 func_0200ecc0(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_0200e984;

s32 func_0200ed20(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0200ecc0(arg0, arg1, &func_0200e984, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200e944();
    return sp0;
}
