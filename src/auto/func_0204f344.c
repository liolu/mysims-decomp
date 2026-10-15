#include "m2c.h"

M2C_UNK func_02043094(s32);                         /* extern */
M2C_UNK func_02044d18();                            /* extern */
M2C_UNK func_02047b3c(void *, s32);                 /* extern */
M2C_UNK func_0204f1cc(void *);                      /* extern */

void func_0204f344(void *arg0) {
    s32 var_r4;

    func_02044d18();
    func_02043094(M2C_FIELD(arg0, s32 *, 0x1D94));
    M2C_FIELD(arg0, s32 *, 0x1D94) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D98) = 0;
    M2C_FIELD(arg0, s16 *, 0x1D9C) = 0;
    func_0204f1cc(arg0);
    var_r4 = 0;
    do {
        func_02047b3c(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 < 5);
    M2C_FIELD(arg0, s32 *, 0x1DF4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1DF4) & ~0x1F00);
}
