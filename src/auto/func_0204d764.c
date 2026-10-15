#include "m2c.h"

M2C_UNK func_0204dcec(void *);                      /* extern */
M2C_UNK func_0204dd4c(void *);                      /* extern */
M2C_UNK func_0204dda4(void *);                      /* extern */
M2C_UNK func_0204ef48();                            /* extern */

void func_0204d764(void *arg0) {
    func_0204ef48();
    if (M2C_FIELD(arg0, s32 *, 0x1DF4) & 4) {
        M2C_FIELD(arg0, s32 *, 0x1D70) = (s32) M2C_FIELD(arg0, s32 *, 0x1D68);
        func_0204dda4(arg0);
        M2C_FIELD(arg0, s32 *, 0x1D68) = (s32) M2C_FIELD(arg0, s32 *, 0x1D6C);
        func_0204dcec(arg0);
        return;
    }
    func_0204dd4c(arg0);
}
