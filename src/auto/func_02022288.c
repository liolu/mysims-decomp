#include "m2c.h"

M2C_UNK func_0202219c(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02043094(s32);                         /* extern */

void func_02022288(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_0202219c(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_02043094(arg0 - arg2);
}
