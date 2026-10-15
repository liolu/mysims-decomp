#include "m2c.h"

M2C_UNK func_0200b240(void *, s32);                 /* extern */
s32 func_0200b29c(void *, s32);                     /* extern */
s32 func_0200be78(s32);                             /* extern */
M2C_UNK func_0200c08c();                            /* extern */

s32 func_0200c120(void *arg0) {
    func_0200b240(arg0, func_0200b29c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0200be78(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0200c08c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
