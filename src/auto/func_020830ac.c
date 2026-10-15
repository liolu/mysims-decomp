#include "m2c.h"

M2C_UNK func_020710e0(M2C_UNK *, s32);              /* extern */
u32 func_02071100(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020713f4(M2C_UNK *, s32);              /* extern */
u32 func_02071570(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_020805e0(M2C_UNK);                         /* extern */
s32 func_02081dbc(M2C_UNK, M2C_UNK);                /* extern */
extern s32 data_02118994;

s32 func_020830ac(M2C_UNK arg0) {
    M2C_UNK sp4;
    M2C_UNK sp0;
    s32 var_r5;

    var_r5 = 0;
    func_020710e0(&sp4, data_02118994 + 0xDE8);
    if ((u8) (func_02071100(&sp4, 0xB) >> 0x10) == 0x61) {
        func_020713f4(&sp0, data_02118994 + 0x390C);
        if ((func_02071570(&sp0, 6) >= 0x28U) && (func_020805e0(0) == 0) && (func_02081dbc(arg0, 0xBE) != 0)) {
            var_r5 = 1;
        }
    }
    return var_r5;
}
