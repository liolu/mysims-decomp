#include "m2c.h"

M2C_UNK func_02009168(M2C_UNK, s32, u32);           /* extern */
u32 func_0205b6fc();                                /* extern */

void func_0205b5c0(void *arg0) {
    u32 temp_r1;
    u32 var_r2;

    var_r2  = func_0205b6fc();
    temp_r1 = M2C_FIELD(arg0, u32 *, 0x48);
    if (var_r2 > temp_r1) {
        var_r2 = temp_r1;
    }
    func_02009168(0, M2C_FIELD(arg0, s32 *, 0x44), var_r2);
}
