#include "m2c.h"

s32 func_0203008c();                                /* extern */
s32 func_020304a4();                                /* extern */
M2C_UNK func_020304cc(M2C_UNK, s32);                /* extern */
s32 func_02030c44(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0203101c;

s32 func_02030dbc(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_020304a4();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0203008c();
        }
        var_r4 = func_02030c44(arg0, &func_0203101c, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_020304cc(arg0, var_r4);
        }
    }
    return var_r4;
}
