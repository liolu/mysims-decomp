#include "m2c.h"

s32 func_02038e34();                                /* extern */
M2C_UNK func_02038e40(void *, s32);                 /* extern */

void func_02038d9c(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;
    u16 temp_r0;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (!(temp_r2 & 1)) {
        return;
    }
    if (temp_r2 & 2) {
        func_02038e40(arg0, arg1 + func_02038e34());
        return;
    }
    var_r1 = arg1 + func_02038e34(arg0);
    if (arg1 < 0) {
        if (var_r1 < 0) {
            var_r1                       = 0;
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~1);
        }
    } else {
        temp_r0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 8), u16 *, 4);
        if (var_r1 >= (s32) (temp_r0 << 0xC)) {
            var_r1                       = (temp_r0 << 0xC) - 1;
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~1);
        }
    }
    func_02038e40(arg0, var_r1);
}
