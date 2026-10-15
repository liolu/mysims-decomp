#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021daac4;

s32 func_02060d40(void *arg0) {
    s32 temp_r4;

    func_02006da0(&data_021daac4);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C) - M2C_FIELD(arg0, s32 *, 0x28);
    func_02006e24(&data_021daac4);
    return temp_r4;
}
