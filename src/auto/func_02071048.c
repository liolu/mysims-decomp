#include "m2c.h"

M2C_UNK func_020713f4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02071414(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020714cc(M2C_UNK *);                   /* extern */

void func_02071048(s32 arg0) {
    M2C_UNK sp0;
    s32 var_r5;

    func_020713f4(&sp0, arg0 + 0x390C);
    var_r5 = 0;
    do {
        func_02071414(&sp0, var_r5);
        var_r5 += 1;
    } while (var_r5 < 8);
    func_020714cc(&sp0);
}
