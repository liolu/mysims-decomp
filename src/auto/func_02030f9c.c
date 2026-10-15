#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
s32 func_02030074(s32);                             /* extern */
s32 func_020304a4(M2C_UNK);                         /* extern */
M2C_UNK func_020304cc(M2C_UNK, M2C_UNK);            /* extern */

void func_02030f9c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_0200856c();
    temp_r4 = func_02030074(arg1);
    if (arg0 == func_020304a4(arg2)) {
        func_020304cc(arg2, 0);
    }
    func_02030074(temp_r4);
    func_02008580(temp_r5);
}
