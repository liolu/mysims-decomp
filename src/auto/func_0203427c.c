#include "m2c.h"

M2C_UNK func_02033d80(void *, s32);                 /* extern */
M2C_UNK func_020346f8(void *, s32, M2C_UNK);        /* extern */

void func_0203427c(void *arg0, s32 arg1, u32 arg2) {
    s32 var_r1;
    s32 var_r1_2;

    switch (arg2) {
        default:
            break;
        case 0:
            if (arg1 != 0) {
                var_r1 = 0x05000000;
            } else {
                var_r1 = 0x05000400;
            }
            func_020346f8(arg0, var_r1, 0x200);
            break;
        case 1:
            if (arg1 != 0) {
                var_r1_2 = 0x05000200;
            } else {
                var_r1_2 = 0x05000600;
            }
            func_020346f8(arg0, var_r1_2, 0x200);
            break;
        case 2:
            func_020346f8(arg0, 0, 0x2000);
            break;
        case 3:
            func_020346f8(arg0, 0x2000, 0x2000);
            break;
        case 4:
            func_020346f8(arg0, 0x4000, 0x2000);
            break;
        case 5:
            func_020346f8(arg0, 0x6000, 0x2000);
            break;
        case 6:
            func_020346f8(arg0, 0, 0x2000);
            break;
    }
    func_02033d80(arg0, arg1);
    M2C_FIELD(arg0, u32 *, 0x24) = arg2;
}
