#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02053464(s32, s32);                    /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
s32 func_02060b38(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_02081dbc(s32, u32);                        /* extern */
extern M2C_UNK data_020dd8d0;
extern s32 data_02118998;

s32 func_02052c24(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    u8 sp8[32];
    s32 sp4;
    u32 var_r7;

    sp4    = arg3;
    var_r7 = 0x131;
    if (arg3 == 0) {
        sp4 = arg0 + 0x4A0;
    }
loop_3:
    if (func_02081dbc(data_02118998 + 0x380C, var_r7) != 0) {
        func_0201a678(sp8, &data_020dd8d0, arg1, arg2, var_r7 - 0x12C);
        if (func_02060b38(arg0 + 4, sp8, 0) != 0) {
            func_02053464(sp4, M2C_FIELD(arg0, s32 *, 8));
            func_02060604(arg0 + 4);
            return 1;
        }
    }
    var_r7 -= 1;
    if (var_r7 < 0x12CU) {
        return 0;
    }
    goto loop_3;
}
