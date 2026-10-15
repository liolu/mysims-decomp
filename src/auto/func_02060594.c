#include "m2c.h"

s32 func_02000e80();                                /* extern */
s32 func_02000fac();                                /* extern */
s32 func_020010ec(s32, s32, M2C_UNK, s32);          /* extern */
M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
M2C_UNK func_02060604();                            /* extern */
extern M2C_UNK data_021189b4;

s32 func_02060594(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r4;
    s32 var_r5;

    var_r4 = arg2;
    var_r5 = 0;
    func_02060604();
    if (var_r4 == 0) {
        func_02000e80();
        var_r4 = func_02000fac();
        if (var_r4 == 0) {
            var_r4 = 4;
        }
    }
    func_02006da0(&data_021189b4);
    temp_r4 = func_020010ec(func_02000e80(), arg1, 0, var_r4);
    func_02006e24(&data_021189b4);
    if (temp_r4 != 0) {
        var_r5                    = 1;
        M2C_FIELD(arg0, s32 *, 4) = temp_r4;
        M2C_FIELD(arg0, s32 *, 8) = arg1;
    }
    return var_r5;
}
