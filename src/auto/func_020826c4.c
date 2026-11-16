/* compiler: 2.0/sp1p5 -flag no-opt_strength_reduction */
#include "m2c.h"

extern s32 data_02118994;

s32 func_020826c4(s32 arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r2;

    var_r3 = 0;
loop_1:
    temp_r2 = data_02118994 + 0x958 + (var_r3 * 2);
    if (arg1 == M2C_FIELD(temp_r2, u16 *, 0x72)) {
        M2C_FIELD(temp_r2, u16 *, 0x72) = 0U;
        return 1;
    }
    var_r3 += 1;
    if (var_r3 >= 0x32) {
        return 0;
    }
    goto loop_1;
}
