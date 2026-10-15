#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
s32 func_0200c968(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02060e40(s32);                         /* extern */
extern M2C_UNK data_021daac4;

s32 func_02060ca4(s32 arg0, M2C_UNK arg1) {
    s32 var_r4;

    func_02006da0(&data_021daac4);
    func_02060e40(arg0);
    if (func_0200c968(arg0 + 4, arg1) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02006e24(&data_021daac4);
    return var_r4;
}
