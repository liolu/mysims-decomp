#include "m2c.h"

s32 func_02081e00(void *, s32);                     /* extern */
extern void *data_02118998;

s32 func_020741f0(void *arg0) {
    s32 var_r2;
    u32 temp_r1;
    void *temp_r0;

    var_r2  = 0;
    temp_r0 = data_02118998 + 0x380C;
    temp_r1 = M2C_FIELD(temp_r0, u32 *, 0xD0);
    switch (temp_r1) {
        default:
            break;
        case 0:
            var_r2 = func_02081e00(temp_r0, M2C_FIELD(arg0, s32 *, 0));
            break;
        case 1:
            var_r2 = func_02081e00(temp_r0, M2C_FIELD(arg0, s32 *, 4));
            break;
        case 2:
            var_r2 = func_02081e00(temp_r0, M2C_FIELD(arg0, s32 *, 8));
            break;
        case 3:
            var_r2 = func_02081e00(temp_r0, M2C_FIELD(arg0, s32 *, 0xC));
            break;
    }
    if (var_r2 != 0) {
        M2C_FIELD(data_02118998, s32 *, 0x38DC) = -1;
    }
    return var_r2;
}
