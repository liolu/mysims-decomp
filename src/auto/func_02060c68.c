#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021daac4;

s32 func_02060c68(void *arg0) {
    s32 var_r4;

    func_02006da0(&data_021daac4);
    if (M2C_FIELD(arg0, s32 *, 0x10) & 0x10) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02006e24(&data_021daac4);
    if (var_r4 != 0) {
        return 1;
    }
    return 0;
}
