#include "m2c.h"

M2C_UNK func_0200c688(M2C_UNK *);                   /* extern */
s32 func_0200c6b0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0200c870(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_0200c688(sp0);
    if (func_0200c6b0(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
