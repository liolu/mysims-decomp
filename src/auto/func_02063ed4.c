#include "m2c.h"

u32 func_02023acc(void *, M2C_UNK);                 /* extern */
s32 func_02023ad8(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020258d0(void *, M2C_UNK, void *);     /* extern */

void func_02063ed4(void *arg0, M2C_UNK arg1, void *arg2, s32 arg3) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 var_r0;
    u32 var_r0_2;

    if (func_02023ad8(arg2, 1) != 0) {
        temp_r0 = func_02023acc(arg2, 1);
        if (M2C_FIELD(arg2, s32 *, 4) != 0) {
            var_r0 = temp_r0 >> 9;
        } else {
            var_r0 = temp_r0 >> 5;
        }
        M2C_FIELD(arg0, s8 *, 0x98) = (s8) (arg3 + var_r0);
    }
    if (func_02023ad8(arg2, 2) != 0) {
        temp_r0_2 = func_02023acc(arg2, 2);
        if (M2C_FIELD(arg2, s32 *, 4) != 0) {
            var_r0_2 = temp_r0_2 >> 9;
        } else {
            var_r0_2 = temp_r0_2 >> 5;
        }
        M2C_FIELD(arg0, s8 *, 0x99) = (s8) (arg3 + var_r0_2);
    }
    func_020258d0(arg0, arg1, arg2);
}
