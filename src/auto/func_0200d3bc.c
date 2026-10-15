#include "m2c.h"

s32 func_0200cfa8(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0200d0a4(M2C_UNK *);                       /* extern */
M2C_UNK func_0200d1c8(M2C_UNK *);                   /* extern */

s32 func_0200d3bc(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_0200cfa8(sp0, arg0, arg1) == 0) || (func_0200d0a4(sp0) == 0)) {
        return 0;
    }
    func_0200d1c8(sp0);
    return 1;
}
