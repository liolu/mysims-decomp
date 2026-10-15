#include "m2c.h"

M2C_UNK func_01ff8448(s32, M2C_UNK, s32, s32);      /* extern */
M2C_UNK func_02005b28(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02008c4c(s32);                         /* extern */
M2C_UNK func_02008d30(s32, M2C_UNK);                /* extern */
M2C_UNK func_02008db4(s32, M2C_UNK, u32, M2C_UNK);  /* extern */
extern M2C_UNK data_02106ecc;
extern M2C_UNK func_020090c4;

void func_0200900c(s32 arg0, M2C_UNK arg1, u32 arg2, M2C_UNK (*arg3)(s32), s32 arg4) {
    if (arg2 == 0) {
        if (arg3 == NULL) {
            return;
        }
        arg3(arg4);
        return;
    }
    do {

    } while (M2C_FIELD(&data_02106ecc, volatile s32 *, 0) != 0);
    M2C_FIELD(&data_02106ecc, volatile s32 *, 0)      = 1;
    M2C_FIELD(&data_02106ecc, volatile s32 *, 4)      = arg0;
    M2C_FIELD(&data_02106ecc, M2C_UNK(**)(s32), 0x10) = arg3;
    M2C_FIELD(&data_02106ecc, volatile s32 *, 0x14)   = arg4;
    func_02008d30(arg0, 0x38000000);
    func_02008db4(arg0, arg1, arg2, 0);
    func_02008c4c(arg0);
    func_02005b28(arg0, &func_020090c4, 0);
    func_01ff8448(arg0, arg1, 0x04000400, -0x03C00000 | (arg2 >> 2));
}
