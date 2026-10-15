#include "m2c.h"

s32 func_02000e80();                                /* extern */
s32 func_020010ec(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021189b4;

s32 func_02042fd8(M2C_UNK arg0) {
    s32 temp_r4;

    func_02006da0(&data_021189b4);
    temp_r4 = func_020010ec(func_02000e80(), arg0, 4, 4);
    func_02006e24(&data_021189b4);
    return temp_r4;
}
