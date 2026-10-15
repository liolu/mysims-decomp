#include "m2c.h"

M2C_UNK func_020080e8(void *);                      /* extern */
s32 func_02008518(u16);                             /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
M2C_UNK func_02008968();                            /* extern */

void func_020081e8(void *arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;
    s32 var_r0;
    u16 temp_r9;

    temp_r4 = func_0200856c();
    if ((arg0 == NULL) || (M2C_FIELD(arg0, s32 *, 0) != 0)) {
        func_02008968();
    }
    temp_r9                      = *(u16 *) 0x04000006;
    var_r0                       = func_02008518(temp_r9);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = arg1;
    if ((s32) arg1 <= (s32) temp_r9) {
        var_r0 += 1;
    }
    M2C_FIELD(arg0, s32 *, 0xC)  = var_r0;
    M2C_FIELD(arg0, s16 *, 0x12) = arg2;
    M2C_FIELD(arg0, s32 *, 0)    = arg3;
    M2C_FIELD(arg0, s32 *, 4)    = arg4;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    func_020080e8(arg0);
    func_02008580(temp_r4);
}
