#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_0205b4e4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0205b520(void *, s32);                 /* extern */
M2C_UNK func_0205b718(void *, M2C_UNK);             /* extern */
s32 *func_020603dc(M2C_UNK);                        /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
s32 func_020606c0(void *, M2C_UNK *, M2C_UNK);      /* extern */

void func_0205ea60(void *arg0, s32 arg1) {
    u8 sp0[32];
    s32 var_r4;

    func_0205b520(arg0, 0);
    func_0205b4e4(arg0, 0);
    func_02060604(arg0 + 0xB0);
    func_02060604(arg0 + 0xA4);
    M2C_FIELD(arg0, s32 *, 0x184) = -1;
    M2C_FIELD(arg0, s32 *, 0x68)  = arg1;
    if (arg1 != -1) {
        if (arg1 == -1) {
            var_r4 = 0;
        } else {
            var_r4 = arg1;
        }
        func_0201a678(sp0, *func_020603dc(0), var_r4 + 0x41);
        if (func_020606c0(arg0 + 0xB0, sp0, 0) != 0) {
            func_0205b520(arg0, M2C_FIELD(arg0, s32 *, 0xB4));
        }
        func_0205b718(arg0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x188) = arg1;
}
