#include "m2c.h"

s32 func_0202adc4(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02056450(void *);                      /* extern */
M2C_UNK func_02056650();                            /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
s32 func_02060b38(void *, M2C_UNK, M2C_UNK);        /* extern */

s32 func_020565d4(void *arg0, M2C_UNK arg1) {
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x38) != 0) {
        func_02056650(arg0);
        M2C_FIELD(arg0, u8 *, 0x38) = 0U;
    }
    if (func_02060b38(arg0 + 0xC, arg1, 0) != 0) {
        if (func_0202adc4(M2C_FIELD(arg0, s32 *, 0x10), 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0x38) = 1U;
            func_02056450(arg0);
            var_r4 = 1;
        } else {
            func_02060604(arg0 + 0xC);
        }
    }
    return var_r4;
}
