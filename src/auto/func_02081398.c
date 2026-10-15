#include "m2c.h"

s32 func_0200cb80(M2C_UNK *);                       /* extern */
M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_02042f10(M2C_UNK);                     /* extern */
s32 func_02083b94(void *, M2C_UNK *);               /* extern */
M2C_UNK func_02083c00(void *, s32);                 /* extern */
extern M2C_UNK data_020fb6c0;
extern M2C_UNK data_020fb720;

s32 func_02081398(void *arg0, s32 arg1, s32 arg2) {
    u8 sp0[16];
    s32 var_r1;
    s32 var_r6;

    var_r6 = 0;
    func_02042f10(3);
    if (func_0200cb80(&data_020fb6c0) != 0) {
        func_0201a678(sp0, &data_020fb720, arg1);
        if (func_02083b94(M2C_FIELD(arg0, void **, 0x10), sp0) != 0) {
            if (arg2 >= 0) {
                M2C_FIELD(arg0, s32 *, 0x460) = 3;
                switch (arg2) {                     /* irregular */
                    case 0:
                        var_r1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10), s32 *, 8);
                        break;
                    case 3:
                        var_r1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10), s32 *, 0x1C);
                        break;
                    case 4:
                        var_r1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10), s32 *, 0x14);
                        break;
                    default:
                        var_r1 = arg2 + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x10), s32 *, 8);
                        break;
                }
                func_02083c00(M2C_FIELD(arg0, void **, 0x10), var_r1);
                M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (M2C_FIELD(arg0, s32 *, 0x47C) | 0x200);
            }
            var_r6 = 1;
        }
        if (var_r6 != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
            M2C_FIELD(arg0, s32 *, 0x28) = 1;
        }
    }
    func_02042f10(1);
    return var_r6;
}
