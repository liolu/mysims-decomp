#include "m2c.h"

M2C_UNK func_0205acd0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0205eb7c(void *, s32);                 /* extern */
M2C_UNK func_0205f780(void *, u16);                 /* extern */
M2C_UNK func_0205f7a4(void *, u16);                 /* extern */
M2C_UNK func_0206f6dc(void *, M2C_UNK);             /* extern */
s32 func_0206f8c0(void *);                          /* extern */
extern void *data_02118998;
extern s32 data_021daae4;

u32 func_020733fc(void *arg0) {
    u32 var_r4;
    u32 var_r5;
    void *temp_r0;

    var_r4 = 0;
    var_r5 = M2C_FIELD(data_02118998, u32 *, 0x3CEC);
    switch (var_r5) {
        default:
            break;
        case 0:
            temp_r0 = data_02118998 + 0x812C;
            if (M2C_FIELD(temp_r0, s32 *, 0x150) != 4) {
                func_0206f6dc(temp_r0, 4);
            }
            var_r5 += 1;
            break;
        case 1:
            if (func_0206f8c0(data_02118998 + 0x812C) == 0) {
                var_r5 += 1;
            }
            break;
        case 2:
            if (data_021daae4 == 0) {
                func_0205acd0(0x6A, 0);
                if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                    func_0205eb7c(data_02118998 + 0x9728, M2C_FIELD(arg0, s32 *, 0));
                    func_0205f7a4(data_02118998 + 0x9728, (u16) M2C_FIELD(arg0, s32 *, 4));
                } else {
                    func_0205f780(data_02118998 + 0x9728, (u16) M2C_FIELD(arg0, s32 *, 0));
                }
                data_021daae4 += 1;
            } else if (M2C_FIELD(data_02118998, s32 *, 0x989C) == 0) {
                func_0206f6dc(data_02118998 + 0x812C, 0);
                func_0205acd0(0x6B, 0);
                data_021daae4 = 0;
                var_r5 += 1;
            }
            break;
        case 3:
            if (func_0206f8c0(data_02118998 + 0x812C) == 0) {
                var_r5 = 0;
                var_r4 = 1;
            }
            break;
    }
    M2C_FIELD(data_02118998, u32 *, 0x3CEC) = var_r5;
    return var_r4;
}
