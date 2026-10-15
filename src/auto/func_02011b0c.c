#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
void *func_020115dc();                              /* extern */
s32 func_020115ec();                                /* extern */

s32 func_02011b0c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0200856c();
    temp_r0 = func_020115ec();
    if (temp_r0 != 0) {
        func_02008580(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020115dc(), s32 *, 0xC8) = arg0;
    func_02008580(temp_r5);
    return 0;
}
