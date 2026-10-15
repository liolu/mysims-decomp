#include "m2c.h"

s32 func_0208beec(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r2;
    s32 var_ip;

    var_ip = 0;
    if (arg2 == M2C_FIELD(arg0, s32 *, 0x10)) {
        if ((arg1 >= 0) && (arg1 < 6)) {
            temp_r2 = (arg1 * 0x44) + (s32) arg0;
            if (arg3 == M2C_FIELD(temp_r2, s32 *, 0xF4)) {
                if ((s32) M2C_FIELD(temp_r2, s32 *, 0x120) >= arg4) {
                    var_ip = 1;
                }
            }
        } else if ((arg3 == M2C_FIELD(arg0, s32 *, 0xDC)) && ((s32) M2C_FIELD(arg0, s32 *, 0xD8) >= arg4)) {
            var_ip = 1;
        }
    }
    return var_ip;
}
