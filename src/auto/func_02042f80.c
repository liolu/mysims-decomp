#include "m2c.h"

s32 func_020010ec(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
s32 func_02042eec(s32);                             /* extern */
extern M2C_UNK data_021189b4;

s32 func_02042f80(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = 0;
    func_02006da0(&data_021189b4);
    if ((arg1 >= 0) && (arg1 < 4)) {
        var_r4 = func_020010ec(func_02042eec(arg1), arg0, 4, 4);
    }
    func_02006e24(&data_021189b4);
    return var_r4;
}
