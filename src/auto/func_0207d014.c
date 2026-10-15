#include "m2c.h"

u32 func_0208274c(s32, u16, u16);                   /* extern */
extern s32 data_02118998;

s32 func_0207d014(void *arg0) {
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r1;

    var_r5  = 0;
    temp_r0 = func_0208274c(data_02118998 + 0x380C, (u16) M2C_FIELD(arg0, s32 *, 0), (u16) M2C_FIELD(arg0, s32 *, 4));
    temp_r1 = M2C_FIELD(arg0, u32 *, 8);
    if ((temp_r1 != 0) && (temp_r0 >= temp_r1)) {
        var_r5 = 1;
    } else if ((s32) temp_r0 > 0) {
        var_r5 = 1;
    }
    return var_r5;
}
