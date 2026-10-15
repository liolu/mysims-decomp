#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
s32 func_0200cb14(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_021daac4;

s32 func_02060d70(s32 arg0) {
    s32 temp_r4;

    func_02006da0(&data_021daac4);
    temp_r4 = func_0200cb14(arg0 + 4, 0, 0);
    func_02006e24(&data_021daac4);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
