#include "m2c.h"

s32 func_02000e80();                                /* extern */
s32 func_020010ec(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
M2C_UNK func_020c71e0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020c7f70();                            /* extern */
extern M2C_UNK data_021189b4;

void func_020c7a30(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020c7f70();
    M2C_FIELD(arg0, s32 *, 0x8C) = arg4;
    func_02006da0(&data_021189b4);
    M2C_FIELD(arg0, s32 *, 0x88) = func_020010ec(func_02000e80(), M2C_FIELD(arg0, s32 *, 0x8C) * 0x820, 4, 0x20);
    func_02006e24(&data_021189b4);
    func_020c71e0(arg0, arg1, arg2, arg3);
}
