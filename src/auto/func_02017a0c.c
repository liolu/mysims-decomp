#include "m2c.h"

M2C_UNK func_02005edc();                            /* extern */
M2C_UNK func_02008580(s32);                         /* extern */

void func_02017a0c(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02005edc(arg0);
    }
    func_02008580(M2C_FIELD(arg1, s32 *, 4));
}
