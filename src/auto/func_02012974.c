#include "m2c.h"

M2C_UNK func_02007000(M2C_UNK *, u32);              /* extern */
M2C_UNK func_02009108(s32, M2C_UNK *, u32);         /* extern */
M2C_UNK func_02011450(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020114c0(M2C_UNK, M2C_UNK, M2C_UNK *, u32, s32, s32, s32); /* extern */
s32 func_02011650(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_0210a000;

s32 func_02012974(M2C_UNK arg0, s32 arg1, u32 arg2, s32 arg3, u16 arg4, u8 arg5) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02011650(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if (arg2 > 0x70U) {
        return 6;
    }
    func_02009108(arg1, &data_0210a000, arg2);
    func_02007000(&data_0210a000, arg2);
    func_02011450(0x18, arg0);
    var_r0 = func_020114c0(0x18, 5, &data_0210a000, arg2, arg3, (s32) arg4, (s32) arg5);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
