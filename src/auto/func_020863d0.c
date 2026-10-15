#include "m2c.h"

s32 func_020863d0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_ip;

    var_ip = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x18) <= arg1) && (arg1 <= (s32) M2C_FIELD(arg0, s32 *, 0x1C)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0x10) <= arg2) && (arg2 <= (s32) M2C_FIELD(arg0, s32 *, 0x14))) {
        var_ip = 1;
    }
    return var_ip;
}
