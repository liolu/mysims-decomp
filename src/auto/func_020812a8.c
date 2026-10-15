#include "m2c.h"

s32 func_0200cb80();                       /* extern */
M2C_UNK func_0201a678(); /* extern */
M2C_UNK func_02042f10();                     /* extern */
s32 func_02083b94();                  /* extern */
M2C_UNK func_02083c64();                            /* extern */
extern M2C_UNK data_020fb6c0;
extern M2C_UNK data_020fb6f6;
extern M2C_UNK data_020fb70b;
extern void *data_02118994;
extern void *data_02118998;

s32 func_020812a8(void *arg0, s32 arg1, u16 arg2) {
    u8 sp0[20];
    s32 var_r7;

    var_r7 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_02083c64();
    }
    func_02042f10(3);
    if (func_0200cb80(&data_020fb6c0) != 0) {
        if (arg1 == 1) {
            func_0201a678(sp0, &data_020fb6f6, arg2, M2C_FIELD(data_02118994, u16 *, 0x9A2));
            var_r7 = func_02083b94(M2C_FIELD(arg0, s32 *, 0x10), sp0);
        } else if (arg1 == 2) {
            func_0201a678(sp0, &data_020fb70b, M2C_FIELD(data_02118998, u16 *, 0x27D0));
            var_r7 = func_02083b94(M2C_FIELD(arg0, s32 *, 0x10), sp0);
        }
        if (var_r7 != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = arg1;
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) arg2;
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
        }
    }
    func_02042f10(1);
    return var_r7;
}
