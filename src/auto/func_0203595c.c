#include "m2c.h"

s32 func_0203595c(void *arg0, void *arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(arg1, u16 *, 4) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0) & 1) {
            var_r3 |= 3;
        } else if (M2C_FIELD(arg1, u16 *, 6) == 0) {
            var_r3 |= 1;
        }
    }
    M2C_FIELD(arg0, u16 *, 8)   = (u16) M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) M2C_FIELD(arg0, u16 *, 6);
    if (var_r3 & 1) {
        if (!(M2C_FIELD(arg1, u16 *, 6) & 1)) {
            M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 0);
        }
        if (!(M2C_FIELD(arg1, u16 *, 6) & 2)) {
            M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 2);
        }
    } else if (M2C_FIELD(arg0, s32 *, 0) & 1) {
        var_r3 |= 4;
    } else {
        var_r3 &= ~4;
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r3;
    if (var_r3 & 1) {
        return 1;
    }
    return 0;
}
