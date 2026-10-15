#include "m2c.h"

M2C_UNK func_02018160();                            /* extern */
s32 func_02035710(s32);                             /* extern */

void func_0203310c(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_02018160();
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = func_02035710(arg1);
}
